## Asterisk Pyramid

## Description

This project is a simple C++ program that generates an odd-number-based asterisk pyramid. The number of rows in the pyramid is specified by the user, and each row contains an odd number of asterisks centered with respect to the total number of rows.

## Features

- Prompts the user to enter the number of rows for the pyramid.
- Generates a pyramid where each row contains an odd number of asterisks.
- Centers the asterisks in each row relative to the total number of rows.

## Example

For an input of `5`, the output will be:

    *
   ***
  *****
 *******
*********


## Requirements

- C++ compiler (e.g., g++, clang++)
- Basic understanding of loops and conditional statements in C++

## Usage

1. **Clone the repository:**

   ```sh
   git clone https://github.com/FocusedPoetry10/asterisk-pyramid.git
   cd asterisk-pyramid

2. **Compile the Program:**
   ```sh
   g++ -o asterisk_pyramid main.cpp

3. **Run the Program:**
   ```sh
   ./asterisk_pyramid

4. **Enter the Number of Rows:**
   ```sh
   Enter the number of rows: **It's your choice**

# Detailed Explanation

1. **Input Prompt:**
- The user is prompted to enter the number of rows for the pyramid.
- The input is stored in the variable `n`.

2. **Outer Loop:**
- Iterates from 1 to `n` to process each row.
- `i` represents the current row number.

3. **Spaces Calculation:**
- The number of spaces before the asterisks in each row is calculated as `n - i`.

4. **Asterisks Calculation:**
- The number of asterisks in each row is an odd number, calculated as `2 * i - 1`.

5. **Printing Spaces:**
- A nested loop prints the calculated number of spaces for each row.

6. **Printing Asterisks:**
- Another nested loop prints the calculated number of asterisks for each row.

7. **Move to Next Line:**
- After printing the spaces and asterisks for a row, the program moves to the next line.

## Contributing
If you would like to contribute to this project, please fork the repository and submit a pull request with your changes. Ensure that your code adheres to the project's coding standards and includes appropriate tests.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.
