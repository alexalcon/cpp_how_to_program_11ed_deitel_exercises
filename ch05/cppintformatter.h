// cppintformatter.h
// Custom std::formatter that formats a 
// boost::multiprecision::cpp_int as a std::string.
#pragma once
#include <boost/multiprecision/cpp_int.hpp>
#include <format>
#include <sstream>
#include <string>

// short name for boost::multiprecision::cpp_int
using bigint = boost::multiprecision::cpp_int;

// Custom formatter for boost::multiprecision::cpp_int.
// Formats the large integer as a string.
// More info at: https://fmt.dev/latest/api.html#format-api
template<> struct std::formatter<bigint> : std::formatter<std::string_view> {
   template <typename FormatContext>
   auto format(const bigint& bi, FormatContext& ctx) const {
      std::ostringstream out{};
      out << bi;
      return formatter<std::string_view>::format(out.str(), ctx);
   }
};