# C++ How to Program: An Objects-Natural Approach, 11/e – Deitel & Deitel – Selected Exercises

[![C++11](https://img.shields.io/badge/C++-11-blue.svg)](https://en.cppreference.com/w/cpp/language/history#C.2B.2B11_period)
[![C++14](https://img.shields.io/badge/C++-14-blue.svg)](https://en.cppreference.com/w/cpp/language/history#C.2B.2B14_period)
[![C++17](https://img.shields.io/badge/C++-17-blue.svg)](https://en.cppreference.com/w/cpp/language/history#C.2B.2B17_period)
[![C++20](https://img.shields.io/badge/C++-20-blue.svg)](https://en.cppreference.com/w/cpp/language/history#C.2B.2B20_period)
[![C++23](https://img.shields.io/badge/C++-23-informational.svg)](https://en.cppreference.com/w/cpp/23)
[![C++26 (proposed)](https://img.shields.io/badge/C++-26%20(proposed)-lightgrey.svg)](https://isocpp.org/std/status)

[![Modules](https://img.shields.io/badge/Feature-Modules-blue.svg)](https://en.cppreference.com/w/cpp/language/modules)&nbsp;
[![Ranges](https://img.shields.io/badge/Feature-Ranges-green.svg)](https://en.cppreference.com/w/cpp/ranges)&nbsp;
[![Coroutines](https://img.shields.io/badge/Feature-Coroutines-brightgreen.svg)](https://en.cppreference.com/w/cpp/language/coroutines)&nbsp;
[![Concepts](https://img.shields.io/badge/Feature-Concepts-yellow.svg)](https://en.cppreference.com/w/cpp/language/constraints)

This repository contains selected solutions to exercises from [**_C++ How to Program: An Objects-Natural Approach, 11/e_**](https://deitel.com/c-plus-plus-how-to-program-an-objects-natural-approach-11-e/) by Deitel & Deitel. The goal of this repository is to provide well-organized, clear, and instructive solutions to help anyone studying the book’s concepts. While not exhaustive, the exercises included here are chosen based on their educational value and complexity. If there’s an exercise you feel should be included, or if you have an alternative solution to an existing one, your contributions are welcome! For details on how to contribute new exercises or improve current solutions, please see the [Contributing Guidelines](CONTRIBUTING.md).

In line with the textbook’s emphasis on **Modern C++**—including C++20, C++17, C++14, and C++11—these exercises also look ahead to key features anticipated for C++23 and beyond. By exploring these solutions, you’ll gain insights into the evolving nature of the language, its best practices, and modern idioms that influence performance, security, and software engineering principles. For a more comprehensive understanding of the underlying philosophy and future direction of C++, consider reading the textbook’s preface in its entirety.

---

## ⚙️ Setting Up the Development Environment

The following guidelines are based on information provided in the textbook, as well as official documentation sources. For more detailed and clear information, readers are encouraged to refer to the following sections of the book:

- **Before You Begin**: Provides foundational details and preparation steps for working with the book and setting up the environment.
- **Section 1.11: Test-Driving a C++20 Application Various Ways**: Offers practical guidance for compiling and running programs using:

  - **1.11.1 Compiling and Running on Windows with Visual Studio Community Edition**
  - **1.11.2 Compiling and Running with GNU C++ on Linux**
  - **1.11.3 Compiling and Running with g++ in the GCC Docker Container**

These sections provide comprehensive instructions and examples to better understand the setup and execution process for C++ development.

### 1. Installing a Compiler

**Windows**  

- **Recommended Approach:** Follow the official Visual Studio Code documentation for C++ development. This method ensures a smooth setup and access to recent compiler features.  
   - See the [VS Code C++ Development Documentation](https://code.visualstudio.com/docs/languages/cpp) for instructions on installing and configuring the Microsoft C++ (MSVC) toolchain or MinGW-w64 (recommended).  
   - Once configured, you can compile and run the exercises directly within VS Code’s integrated terminal, or use any shell terminal of your preference.

- **Alternative Approach (From the Book’s Preface Reference):** If you prefer a setup described in the Deitel & Deitel reference, you can install:
   - [Microsoft Visual C++ from Visual Studio Community Edition](https://visualstudio.microsoft.com/vs/community/) on Windows.
   - Once configured, you can compile and run the exercises directly within Visual Studio Community Edition IDE.
   
   However, the VS Code documentation path typically simplifies the initial configuration process and ensures up-to-date tooling.

**Linux**  

On Linux, C++ compiler availability and features vary depending on the distribution’s package repositories. Modern features of C++ (C++20 and beyond) may not be fully available in older compiler versions shipped with certain distributions. Rather than relying on potentially outdated system packages, it’s often more convenient to use a Docker container that provides the latest stable GCC (GNU Compiler Collection) toolchain.

- **Docker with GCC:**  
  1. Install Docker according to your distribution’s instructions.  
     - [Install Docker Engine](https://docs.docker.com/engine/install/)
       
  2. Pull the latest GCC Docker container:  
     ```bash
     docker pull gcc:latest
     ```
     You only need to run `docker pull gcc:latest` once on your system. After pulling the image, Docker caches it locally. You can then start containers from that image as many times as you need, without pulling it again. If you want to update to a newer version of the image in the future, simply re-run docker `docker pull gcc:latest` to download the latest changes.

  3. Run the container, mounting your local exercises directory (this repository) so you can compile and execute the code inside the container:
     ```bash
     docker run --rm -it -v "$(pwd)":/usr/src gcc:latest
     ```
  4. Once inside the container, navigate to a chapter exercises directory (e.g., `cd /usr/src/ch02/`) and compile as needed:
     ```bash
     g++ -std=c++23 ./exercise_2_13_v1_0_0.cpp -o exercise_2_13_v1_0_0 
     ```
     
  These Docker-based instructions follow the recommendations and examples provided in the Deitel & Deitel text, ensuring access to an up-to-date compiler environment that supports Modern C++ standards.

### 2. Compiling and Running the Exercises

Once installed the right compiller, just navigate to the directory containing the exercise file, then compile an run the code on a shell terminal:

For compiling:
```bash
g++ -std=c++23 exercise_2_13_v1_0_0.cpp -o exercise_2_13_v1_0_0 
```

For executing the code on Windows:
```bash
./exercise_2_13_v1_0_0.exe
```

For executing the code on Linux:
```bash
./exercise_2_13_v1_0_0
```

---

## 📁 Repository File System Structure

Each chapter from the Deitel & Deitel book is represented by a dedicated directory, such as `ch02/`, `chp03/`, etc. Within each chapter directory, you will find:
  - Individual `.cpp` files for each exercise solved.
  - A local `README.md` (where applicable) providing a brief overview of the exercises, key concepts demonstrated, and build instructions if the chapter’s exercises grow more complex.

**Repository Structure:**
```plaintext
cpp_how_to_program_11ed_deitel_exercises/
├── ch02/
│   ├── exercise_2_13_v1_0_0.cpp
│   ├── exercise_2_14_v1_0_0.cpp
│   ├── ...
├── ch03/
│   ├── exercise_3_07_v1_0_0.cpp
│   ├── exercise_3_08_v1_0_0.cpp
│   └── ...
└── ...
└── code_examples/
│   ├── ...
└── vscode_ws/
│   ├── cpp_how_to_program_11ed_deitel_exercises.code-workspace
├── .gitignore
├── .gitmodules
├── comprehensive_git_contribuition_workflow_guide.pdf
├── CONTRIBUTING.md
├── LICENSE
├── README.md
```

The `code_examples/` directory contains [official code examples](https://github.com/pdeitel/CPlusPlusHowToProgram11e) provided in the book. These examples showcase essential concepts and implementations discussed in the book chapters. By studying these examples, you can gain deeper insights into the techniques and practices covered in the text.

---

## 📝 Site Notes

### ✰ Special Exercise Descriptions
Some exercise descriptions feature a ✰ symbol, indicating that the exercise presents an **interesting and somewhat challenging problem** to tackle. Here’s an example:

```cpp
/**
 * File: exercise_3_10_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Validating User Input) The examination results program of Fig. 3.3 assumes that
 *                 any value input by the user that’s not a 1 must be a 2. Modify the application 
 *                 to validate its inputs. If a value entered is not 1 or 2, keep looping until the 
 *                 user enters a correct value.
 * -------------------------------------------------------------------------------------------------
 * Created on: 24-12-2024
 */
```

---

## 🤝 Contributions

Contributions are welcome! If you have a better way to solve an exercise, found a mistake, or want to add a new exercise, check out the [Contributing Guidelines](CONTRIBUTING.md) for details on how to contribute to this repository.

---

This repository is an independent project and is not affiliated with Deitel & Deitel. It exists to assist learners in mastering Modern C++ programming concepts through practical exercises and solutions.