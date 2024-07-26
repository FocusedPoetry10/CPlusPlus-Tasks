# Simple Calculator Program in C++

## Description

This project is a basic calculator application written in C++. The program allows users to perform simple arithmetic operations such as addition, subtraction, multiplication, and division. It takes two numbers as input from the user and performs the selected operation, displaying the result.

## Features

- **User Input**: The program prompts the user to input two numbers and select an arithmetic operator.
- **Arithmetic Operations**: Supports four basic operations:
  - Addition (`+`)
  - Subtraction (`-`)
  - Multiplication (`*`)
  - Division (`/`)
- **Validation**: Includes error handling for invalid operators and division by zero.
- **Interactive**: User-friendly prompts guide the user through the calculation process.

## Code Explanation

- **Header Files**: The program uses the `<iostream>` and `<string>` headers for input/output operations.
- **Variables**: It declares variables to store the user's chosen operator and the two numbers.
- **Input Handling**: 
  - `cin` is used to read the user's input.
  - The program prompts the user to enter the first number, the operator, and the second number.
- **Switch Case**: 
  - A `switch` statement is used to execute the appropriate arithmetic operation based on the user's choice.
  - For division, the program checks if the second number is zero to prevent division by zero.
- **Output**: 
  - The result of the calculation is displayed using `cout`.
  - Error messages are shown for invalid inputs or division by zero.

## How to Run

1. **Clone the Repository**:
    ```sh
    git clone https://github.com/FocusedPoetry10/Simple_Calculator_using_CPlusPlus.git
    ```
2. **Navigate to the Project Directory**:
    ```sh
    cd repository-name
    ```
3. **Compile the Program**:
    ```sh
    g++ -o calculator calculator.cpp
    ```
4. **Run the Program**:
    ```sh
    ./calculator
    ```

## Example Usage

Enter the First Number: 10
Enter your Choice of Operator (+, /, *, -): *
Enter the Second Number: 5
The Final Value: 50


## Contributing

Feel free to fork this repository, create a feature branch, and submit a pull request with your improvements. Contributions are welcome!

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
