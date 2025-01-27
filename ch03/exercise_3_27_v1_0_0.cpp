/**
 * File: exercise_3_27_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: Other Boost Multiprecision Arithmetic Operations) Section 3.14 introduced the Boost 
 *              Multiprecision library’s cpp_int class and used cpp_int objects with the addition,
 *              subtraction and multiplication operators. You also may use division (/) and modulus 
 *              (%) operators. In addition, the Boost Multiprecision library provides many functions
 *              that perform common arithmetic calculations, such as pow for raising a value to a 
 *              specified power or sqrt for calculating the square root of a number. To use the sqrt
 *              and pow functions, add the following using declarations before main:
 * 
 *                  using boost::multiprecision::pow;
 *                  using boost::multiprecision::sqrt; 
 * 
 *              These functions operate as follows:
 *                  
 *                  • The pow function receives two arguments and returns its first argument’s value
 *                    raised to the power specified by its second argument. For example, you can 
 *                    cube the cpp_int object x by calling pow(x, 3).
 *                  • The sqrt function requires one argument and returns the square root of its 
 *                    value.
 * 
 *              For example, you can get the square root of the cpp_int object x by calling sqrt(x).
 *              Modify Fig. 3.5 to perform division (/) and modulus (%) operations using the 
 *              variables value1 and value2. Also, calculate value1 squared, then create the cpp_int
 *              object value4 containing 1000000000000000000000000000000000000 (a 1 followed by 36 
 *              zeros) and calculate value4’s square root. Your updated program’s final output 
 *              should be:
 * 
 *              INITIAL VALUES
 *              cpp_int value1: 100000000000000000000000000000
 *              cpp_int value2: 9223372036854775807
 *                  int value3: 3
 * 
 *              USE CPP_INT OBJECTS WITH THE +, -, *, / AND % OPERATORS
 *              value1 + value2: 100000000009223372036854775807
 *              value1 - value2: 99999999990776627963145224193
 *              value1 * value2: 922337203685477580700000000000000000000000000000
 *              value1 / value2: 10842021724
 *              value1 % value2: 7886392067356368732
 * 
 *              MULTIPLY A CPP_INT OBJECT BY INT VALUES
 *              value1 * value3: 300000000000000000000000000000
 *                  value1 * 17: 1700000000000000000000000000000
 * 
 *              USING BOOST MULTIPRECISION LIBRARY FUNCTIONS POW AND SQRT
 *              value1 squared: 10000000000000000000000000000000000000000000000000000000000
 *              square root of value4: 1000000000000000000
 * -------------------------------------------------------------------------------------------------
 * Created on: 12-01-2025
 */

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;

using boost::multiprecision::cpp_int;
using boost::multiprecision::pow;
using boost::multiprecision::sqrt;
	
int main() {
    // initializing cpp_ints
    const cpp_int value1{"100000000000000000000000000000"}; // 30 digits
    const cpp_int value2{9223372036854775807LL}; // long long max
    const int value3{3}; 
    const cpp_int value4{"1000000000000000000000000000000000000"}; 
    
    cout << "INITIAL VALUES"
        << "\ncpp_int value1: " << value1
        << "\ncpp_int value2: " << value2
        << "\n    int value3: " << value3
        << "\ncpp_int value4: " << value4;
    
    // arithmetic with cpp_ints
    cout << "\n\nUSE CPP_INT OBJECTS WITH THE +, -, *, / AND % OPERATORS"
        << "\nvalue1 + value2: " << value1 + value2
        << "\nvalue1 - value2: " << value1 - value2
        << "\nvalue1 * value2: " << value1 * value2
        << "\nvalue1 / value2: " << value1 / value2
        << "\nvalue1 % value2: " << value1 % value2;
    
    // arithmetic mixing cpp_ints and integers
    cout << "\n\nMULTIPLY A CPP_INT OBJECT BY INT VALUES"
         << "\nvalue1 * value3: " << value1 * value3
         << "\n    value1 * 17: " << value1 * 17 << "\n";
    
    cout << "\n\nUSING BOOST MULTIPRECISION LIBRARY FUNCTIONS POW AND SQRT"
         << "\nvalue1 squared: " << pow(value1, 2)
         << "\nsquare root of value4: " <<  sqrt(value4);
}