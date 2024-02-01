# include<iostream>
# include<cmath>

using namespace std;

int main()
{
    // define variables
    string operation;
    double number1, number2;
    
    // get user input
    cout << "Masukkan Number: ";
    cin >> number1;
    cout << "Masukkan Operasi (+, -, /, *): ";
    cin >> operation;
    cout << "Masukkan Number Kedua: ";
    cin >> number2;
    
    // if else statement checking entered operation
    if (operation == "+") {
        cout << number1 + number2;
    } else if (operation == "-") {
        cout << number1 - number2;
    }
    else if (operation == "/") {
        cout << number1 / number2;
    }
    else if (operation == "*") {
        cout << number1 * number2;
    }
    else {
        cout << "Operasi Tidak Diketahui";
    }



    return 0;
}
