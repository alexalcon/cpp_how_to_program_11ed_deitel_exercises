// maximum function template definition
template <typename T>
T maximum(T vaue1, T value2) {
    T maximum_value{vaue1}; // assume value1 is maximum

    // determine whether value2 is major than maximumValue
    if (value2 > maximum_value) {
        maximum_value = value2;
        return maximum_value;
    }
    else {
        return maximum_value;
    }
}