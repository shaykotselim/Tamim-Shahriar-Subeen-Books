#include <iostream>;
#include <conio.h>;

using namespace std;

int main (){
    double celsius , farenheit;

    cout << "Enter the temperature in celsius : ";
    cin >> celsius;

    farenheit = celsius * 1.8 + 32;

    cout << farenheit;

    getch();
}
