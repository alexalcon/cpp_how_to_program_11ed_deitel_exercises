# Compiling and Executing Code with the Boost Multiprecision Open Source Library

[Boost](https://www.boost.org/) provides 168 open-source C++ libraries. It also serves as a “breeding ground” for new capabilities that often are incorporated into the C++ standard libraries. For convenience, the [Boost Multiprecision open source library](https://www.boost.org/doc/libs/1_87_0/libs/multiprecision/doc/html/index.html) is placed in the `code_examples/CPlusPlusHowToProgram11e/libraries/multiprecision-Boost_1_80_0` directory.

Therefore, to successfully compile and execute programs utilizing this library, follow these steps:

## Compiling and Running the Code in Microsoft Visual Studio:

1. Create a new project.

2. In the **Solution Explorer**, right-click the project’s **Source Files** folder and select  
   **Add > Existing Item...**.

3. Navigate to the `ch04` folder, select a program file that uses this library and click **Add**..

4. In the **Solution Explorer**, right-click the project’s name and select **Properties...**.

5. Under **Configuration Properties**, expand **C/C++**, select **General**, select  
   **Additional Include Directories**, then click the down arrow and select **Edit...** to  
   display the **Additional Include Directories** dialog.

6. Click the yellow folder icon to add a new entry, then click the `...` button to open  
   the **Select Directory** dialog.

7. Navigate into the `libraries\multiprecision-Boost_1_80_0` folder on your system and  
   select `include`, then click **Select Folder**.

8. Click **OK** to close the **Additional Include Directories** dialog, then click **OK** to  
   close your project’s **Properties** dialog.

9. Type `Ctrl + F5` to compile and run the program (Visual C++ may issue warnings for code in class cpp_int).

## Compiling and Running the Code in GNU `g++`

1. At your command line, change to the `ch04` folder.

2. To compile the program, type the following command (on one line). The `-I` option specifies additional folders in which the compiler should search for header files:
```bash
g++ -std=c++20 -I ../code_examples/CPlusPlusHowToProgram11e/libraries/multiprecision-Boost_1_80_0/include exercise_4_10_v1_0_0.cpp -o exercise_4_10_v1_0_0
```

3. Type the following command to execute the program:
```bash    
./exercise_4_10_v1_0_0
```

## C++20 Text Formatting and cpp_dec_float_50 Objects

Boost Multiprecision types do not yet support C++20 text formatting with placeholders like `{:.2f}` that round a floating-point number to a specified precision. However, these types 
do support the old-style C++ formatting with the `fixed` and `setprecision` stream manipulators as used in `ch03`. It’s also possible to customize C++20 text formatting for custom class types.
So, for exercises where the Boost Multiprecision library is employed, a header file `decimalformatter.h` (utilized and defined in the book's section 4.14) is used as a custom formatting 
that enables format to get a string representation of a `cpp_dec_float_50` object rounded to two digits of precision. 

This custom formatter uses the `fixed` and `setprecision` stream manipulators. 
You simply `#include` the header `decimalformatter.h` to enable format to use the custom formatter. This header is located in the `ch04` directory as stated in `commit 834c3fa`. To compile a program 
where this custom header is used, just type the same command stated previously section, i.e.:  
```bash
g++ -std=c++20 -I ../code_examples/CPlusPlusHowToProgram11e/libraries/multiprecision-Boost_1_80_0/include exercise_4_10_v1_0_0.cpp -o exercise_4_10_v1_0_0
```
 

