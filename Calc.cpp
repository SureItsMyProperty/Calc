# include<iostream>
# include<cmath>

using namespace std;

int main()
{
    // nyatakan variabel
    string operation;
    double number1, number2;
    
    // input dari user
    cout << "Masukkan Number: ";
    cin >> number1;
    cout << "Masukkan Operasi (+, -, /, *): ";
    cin >> operation;
    cout << "Masukkan Number Kedua: ";
    cin >> number2;
    
    // if else untuk operasi hitungan
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
