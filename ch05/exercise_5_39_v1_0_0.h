// minimum function template definition
template <typename T>
T minimum(T vaue1, T value2) {
    T minimum_value{vaue1}; // assume value1 is minimum

    // determine whether value2 is less than minimumValue
    if (value2 < minimum_value) {
        minimum_value = value2;
        return minimum_value;
    }
    else {
        return minimum_value;
    }
}