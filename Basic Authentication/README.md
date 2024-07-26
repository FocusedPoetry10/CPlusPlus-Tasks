# Basic Authentication Program in C++

## Description

This project is a simple authentication program written in C++. It prompts the user to enter a username and password, then checks the credentials against a set of predefined values. If the credentials match, the user is logged in successfully; otherwise, an error message is displayed.

## Features

- **User Input**: Prompts the user to input a username and password.
- **Credential Validation**: Compares the entered credentials with predefined username-password pairs.
- **Login Feedback**: Provides feedback on the success or failure of the login attempt.

## Code Explanation

- **Header Files**: The program uses the `<iostream>` and `<string>` headers for input/output operations.
- **Variables**: It declares `username` and `password` variables to store the user's input.
- **Input Handling**: 
  - `cin` is used to read the user's input for both the username and password.
  - The program prompts the user to enter their username and password.
- **Credential Check**: 
  - The program uses a series of `if-else` statements to check the entered credentials against predefined valid credentials.
  - If the credentials match any of the predefined pairs, a success message is displayed.
  - If the credentials do not match, an "Invalid Credentials" message is displayed.
- **Output**: 
  - Success or error messages are displayed using `cout`.

## How to Run

1. **Clone the Repository**:
    ```sh
    git clone https://github.com/FocusedPoetry10/Basic_Authentication_using_CPlusPlus.git
    ```
2. **Navigate to the Project Directory**:
    ```sh
    cd repository-name
    ```
3. **Compile the Program**:
    ```sh
    g++ -o auth Authentication.cpp
    ```
4. **Run the Program**:
    ```sh
    ./Authentication.exe
    ```

## Example Usage

- **Enter your Username:** Vinee3700
- **Enter your Password:** Rakesh370
  -  **Logged in successfully**

- **Enter your Username:** Vinee
- **Enter your Password:** wrongpassword
  - **Invalid Credentials**


## Contributing

Feel free to fork this repository, create a feature branch, and submit a pull request with your improvements. Contributions are welcome!

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
