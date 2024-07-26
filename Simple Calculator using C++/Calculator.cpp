#include<iostream>
#include<string>
using namespace std;

int main(){
    char op;  //op is a character and it contains the '+', '-', '/', '*'
    double num1, num2, result;
    std::cout << "Enter the First Number: ";
    cin >> num1;
    cout << "Enter your Choice of Operator (+, /, *, -):";
    cin >> op;
    cout << "Enter the Second Number: ";
    cin >> num2;

    switch(op){  //using 'op' as the switch case bcuz it has the operator given by the user
        case '+':
           result = num1 + num2;
           break;

        case '-':
           result = num1 - num2;
           break;

        case '*':
           result = num1 * num2;
           break;

        case '/':
           if(num2 != 0){
              result = num1 / num2;
           }else{
               cout<< "Cannot Divide by Zero!!";
               return 1;
           }
           break;

        default:
           cout << "Invalid Operator!!";
           return 1;
    }

    cout << "The Final Value: " << result << endl;
    return 0;

}