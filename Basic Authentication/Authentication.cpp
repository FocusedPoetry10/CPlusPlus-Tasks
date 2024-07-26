#include <iostream>
#include <string>
using namespace std;

int main(){

    string username, password;

    cout << "Enter your Username: ";
    cin >> username;

    cout << "Enter your Password: ";
    cin >> password;

    if (username == "Vinee3700" && password == "Rakesh370")
       cout << "Logged in successfully";
       
    else if (username == "Vineeth" && password == "marshvinee370")
       cout << "Logged in successsfully";

    else if (username == "Vinee" && password == "vinee5323")
       cout << "Logged in successfully";

    else
       cout << "Invalid Credentials";

    return 0;
}