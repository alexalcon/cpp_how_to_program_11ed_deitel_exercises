# Contributing Guidelines

Thank you for considering contributing to this repository! Your contributions are vital in making this project a valuable resource for anyone studying [**_C++ How to Program: An Objects-Natural Approach, 11/e_**](https://deitel.com/c-plus-plus-how-to-program-an-objects-natural-approach-11-e/) by Deitel & Deitel. These guidelines will help you understand how to contribute effectively and maintain the organization and quality of the repository.

---

## 📂 File Naming and Versioning

### Adding a Solution to a New Exercise

- If you are adding a solution to an exercise that is not already present in the repository, the file must be named in the following format:
  ```
  exercise_<chapter_number>_<exercise_number>_v1_0_0.cpp
  ```
  **Example:** For chapter 2, exercise 11, the file should be named:
  ```
  exercise_2_11_v1_0_0.cpp
  ```

### Updating an Existing Solution

- If you are submitting an updated solution to an existing exercise, use Semantic Versioning (SemVer) for naming:
  ```
  v<MAJOR>.<MINOR>.<PATCH>
  ```

#### Versioning Rules

- **MAJOR Version**:
  - Increment when making backward-incompatible changes.
  - Example: Moving from v1.0.0 to v2.0.0 indicates significant changes that may break compatibility.
- **MINOR Version**:
  - Increment when adding new features or functionality that is backward-compatible.
  - Example: Moving from v1.2.0 to v1.3.0 means added features.
- **PATCH Version**:
  - Increment for small fixes or optimizations that do not change functionality.
  - Example: Moving from v1.2.3 to v1.2.4 means bug fixes or formatting corrections.

#### Example of Updated Solution

If the file `exercise_2_13_v1.0.0.cpp` is updated to add a new method to solve the problem:

```
exercise_2_13_v1.1.0.cpp
```

If a bug is fixed in the same solution:

```
exercise_2_13_v1.1.1.cpp
```

#### Note

For any case, always create a new file for the respective updated solution to an existing exercise, e.g.:
```plaintext
cpp_how_to_program_11ed_deitel_exercises/
├── ...
├── ch03/
│   ├── ...
├── ch04/
│   └── ...
│   ├── exercise_4_11_v1_0_0.cpp
│   ├── exercise_4_11_v1_1_0.cpp
│   └── ...
└── ...
```
---

## 📜 Code Documentation

Each solution file must include the following header at the top:

```cpp
/**
 * File: <filename>
 * Author: <Your Name>
 * GitHub: <Your GitHub profile link>
 * ----------------------------------------------------------------------------------
 * Description: <Brief description of the exercise>
 *
 * Additional Challenge: <Optional: List any additional challenges you implemented>
 * ----------------------------------------------------------------------------------
 * Created on: <Date>
 * Last Updated: <Date> (If updating an existing solution)
 */
```

**Example Header:**

```cpp
/**
 * File: exercise_2_13_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ----------------------------------------------------------------------------------------------
 * Description: (Printing) Write a program that prints the numbers 1 to 4 on the same line with
 *              each pair of adjacent numbers separated by one space. Do this in several ways:
 *           
 *                  a) Using one statement with one stream insertion operator.
 *                  b) Using one statement with four stream insertion operators.
 *                  c) Using four statements.
 * ----------------------------------------------------------------------------------------------
 * Created on: 29-02-2024
 * Last Updated: 01-03-2024
 */
```

---

## 🛠 How to Submit Contributions

### 1. Fork the Repository

- Create your own copy of the repository by clicking the "Fork" button on GitHub.

### 2. Clone Your Fork

- Clone the repository to your local machine:
  ```bash
  git clone https://github.com/<your-username>/cpp_how_to_program_11ed_deitel_exercises.git
  ```

### 3. Create a Branch

- Create a new branch for your contribution:
  ```bash
  git checkout -b feature/chapter_<chapter_number>_exercise_<exercise_number>
  ```

### 4. Write Your Code

- Add your solution in the appropriate chapter directory.

### 5. Commit Your Changes

- Use clear and concise commit messages. Follow this format:
  ```
  Added solution for Chapter <chapter_number>, Exercise <exercise_number>
  ```
  **Example:**
  ```
  Added solution for Chapter 2, Exercise 13
  ```

### 6. Push to Your Fork

- Push your changes to your forked repository:
  ```bash
  git push origin feature/chapter_<chapter_number>_exercise_<exercise_number>
  ```

### 7. Submit a Pull Request (PR)

- Create a pull request from your fork to the main repository.
- Provide a clear description of your contribution and include the file name(s) and versioning details.

---

## 📘 Additional Reference
If you are new to Git or want to follow best practices for contributing to open-source projects, refer to the Comprehensive Git Contribution Workflow Guide. You can access the guide [here](./comprehensive_git_contribuition_workflow_guide.pdf).

---

## 🚀 Additional Notes

- **Testing:** Ensure that your code compiles and runs correctly before submitting.
- **Code Style:** Follow modern C++ best practices. Use meaningful variable names and comments.
- **Engage:** Feel free to suggest improvements to the structure or existing solutions.

By contributing, you agree to abide by the repository’s [LICENSE](LICENSE).

Thank you for contributing to this project!

