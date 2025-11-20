# Interactive Towers of Hanoi Visualization (Exercise 5.26)

Chapter 5 introduces recursion as a fundamental problem-solving technique. This directory (`./ch05`) includes a `towers_of_hanoi_recursion_visualization.html` file that demonstrates how the recursive algorithm for **Exercise 5.26 — Towers of Hanoi** works step-by-step.This visualization is designed to help you see the **recursive call structure**, **moves generated**, and some **statistics** produced by this classical recursive solution.


## Directory Feature: `towers_of_hanoi_recursion_visualization.html`

Inside the `./ch05` directory, you’ll find:

```
ch05/
 ├── exercise_5_26_v1_0_0.cpp
 ├── ...
 └── towers_of_hanoi_recursion_visualization.html
```

### Purpose of the Visualization

The **HTML file** provides:

* A **dynamic animation** of the recursive solution.
* A visual representation of how **recursive subproblems** reduce to moving $n - 1$ disks.
* A better intuitive grasp of why recursion is the natural solution for this problem.


## Opening and Running the Visualization

No external libraries or dependencies are required.

1. Navigate into the `./ch05` directory.
2. Open the file:

```
towers_of_hanoi_recursion_visualization.html
```

3. Double-click it, or open it manually in a browser such as:

* Google Chrome
* Microsoft Edge
* Firefox

The visualization will begin immediately and animate the full solution for the default number of disks.


## Compatibility Notes

* The visualization is pure **HTML + CSS + JavaScript**.
* No frameworks, build tools, or internet connection required.
* Works on all modern browsers.
* Safe to run locally — everything is self-contained.


## Summary

This chapter’s directory includes a small but powerful addition: an **interactive visualization** of the Towers of Hanoi algorithm for Exercise 5 26.

It is intended to:

* Strengthen conceptual understanding.
* Support recursive reasoning.
* Enhance the educational value of the repository project.
* Demonstrate attention to detail and teaching-oriented documentation.

---

# Exercise 5.28 (Visualizing Recursion)

## Compiling and Executing Code with the Boost Multiprecision `cpp_int` Library

Exercise 5.28 requires the use of the Boost Multiprecision `cpp_int` type for arbitrary-precision integer computations. For convenience, the Boost library is included at:

```
code_examples/CPlusPlusHowToProgram11e/libraries/multiprecision-Boost_1_80_0
```

This exercise relies on a custom header:

```
./ch05/cppintformatter.h
```

This header enables **C++20-style `std::format` support for `cpp_int` objects**, since Boost Multiprecision does not natively support the `{}` formatting syntax.

---

### Using the Custom Header `cppintformatter.h`

The file:

```
ch05/cppintformatter.h
```

implements a custom formatter that:

* Allows `std::format("{:d}", cpp_int_object)`.
* Internally uses classic stream manipulators (`fixed`, `setprecision`, etc.).
* Makes the recursive-visualization exercise cleaner when printing large integers.

Just include it in the file:

```cpp
#include "cppintformatter.h"
```

No additional configuration is needed beyond including this header.

---

### Compiling and Running the Code in Microsoft Visual Studio

1. Create a new project.
2. Add the exercise source file from the `ch05` directory.
3. Right-click the project name → **Properties…**
4. Under **Configuration Properties > C/C++ > General**, edit
   **Additional Include Directories**.
5. Add the `include` directory of Boost Multiprecision:

```
.../multiprecision-Boost_1_80_0/include
```

6. Ensure that the local header folder `ch05` is part of the project so
   `cppintformatter.h` is detected automatically.
7. Press **Ctrl + F5** to compile and execute.

Visual C++ may emit warnings inside Boost headers — these can be ignored.

---

## Compiling and Running the Code in GNU `g++`

1. Open a terminal and move to the `ch05` folder:

```bash
cd ch05
```

2. Compile the program using the `-I` flag to include the Boost headers:

```bash
g++ -std=c++20 \
    -I ../code_examples/CPlusPlusHowToProgram11e/libraries/multiprecision-Boost_1_80_0/include \
    exercise_5_28_v1_0_0.cpp -o exercise_5_28_v1_0_0
```

3. Run the program:

```bash
./exercise_5_28_v1_0_0
```

This ensures:

* Boost’s `cpp_int` is detected
* Your local header `cppintformatter.h` is used for formatting
* C++20 features (such as `std::format`) are available

---

### Notes on `cpp_int` Formatting in ch05

* The `cpp_int` type does **not** support C++20 formatting without custom specialization.
* The provided file `cppintformatter.h` defines the required formatter specialization for:

```cpp
std::formatter<boost::multiprecision::cpp_int>
```

* This allows use of formatting expressions like:

```cpp
std::format("Result: {}", bigInteger);
```

* This header is required for **exercise_5_28_v1_0_0.cpp** and any other file
  printing arbitrary-precision integers using `std::format`.

---