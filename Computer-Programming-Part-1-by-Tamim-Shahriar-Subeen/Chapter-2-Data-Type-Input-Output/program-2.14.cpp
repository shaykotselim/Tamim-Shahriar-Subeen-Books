#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int num1, num2;

    cout << "Please enter a Number : ";
    cin >> num1;
    cout << "Enter another number : ";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 <<"\n";
    cout << num1 << " - " << num2 << " = " << num1 - num2 <<"\n";
    cout << num1 << " * " << num2 << " = " << num1 * num2 <<"\n";
    cout << num1 << " / " << num2 << " = " << num1 / num2 <<"\n";

    getch();
}
