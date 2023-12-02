#include <iostream>;
#include <conio.h>;

using namespace std;

int main (){
    int num1, num2, value ;
    char sign;

    cout << "Enter any Number : ";
    cin >> num1;
    cout << "Enter another Number : ";
    cin >> num2;

    value = num1 + num2;
    sign = '+';
    cout << num1 << sign << num2 << " = " << value << endl;

    value = num1 - num2;
    sign = '-';
    cout << num1 << sign << num2 << " = " << value << endl;

    value = num1 * num2;
    sign = '*';
    cout << num1 << sign << num2 << " = " << value << endl;

    value = num1 / num2;
    sign = '/';
    cout << num1 << sign << num2 << " = " << value << endl;


    getch();
}
