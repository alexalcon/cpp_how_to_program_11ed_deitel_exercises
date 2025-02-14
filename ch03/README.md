# Compiling and Executing Code with the Boost Multiprecision Open Source Library

[Boost](https://www.boost.org/) provides 168 open-source C++ libraries. It also serves as a “breeding ground” for new capabilities that often are incorporated into the C++ standard libraries. For convenience, the [Boost Multiprecision open source library](https://www.boost.org/doc/libs/1_87_0/libs/multiprecision/doc/html/index.html) is placed in the `code_examples/CPlusPlusHowToProgram11e/libraries/multiprecision-Boost_1_80_0` directory.

Therefore, to successfully compile and execute programs utilizing this library, follow these steps:

## Compiling and Running the Code in Microsoft Visual Studio:

1. Create a new project.

2. In the **Solution Explorer**, right-click the project’s **Source Files** folder and select  
   **Add > Existing Item...**.

3. Navigate to the `ch03` folder, select a program file that uses this library and click **Add**.

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

1. At your command line, change to the `ch03` folder.

2. To compile the program, type the following command (on one line). The `-I` option specifies additional folders in which the compiler should search for header files:
```bash
g++ -std=c++20 -I ../code_examples/CPlusPlusHowToProgram11e/libraries/multiprecision-Boost_1_80_0/include exercise_3_27_v1_0_0.cpp -o exercise_3_27_v1_0_0
```

3. Type the following command to execute the program:
```bash    
./exercise_3_27_v1_0_0
```
