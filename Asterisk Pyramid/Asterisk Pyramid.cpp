#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {

        int spaces = rows - i;

        int astericks = 2 * i - 1;

        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        for (int k = 0; k < astericks; k++) {
            cout << "*";
        }

        cout << endl;
    }
    
    return 0;

}