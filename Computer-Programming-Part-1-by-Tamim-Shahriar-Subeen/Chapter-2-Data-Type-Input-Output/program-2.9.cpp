#include <iostream>;
#include <conio.h>;
#include <iomanip>;
using namespace std;

int main (){
    double a, b, sum;

    a = 9.5;
    b = 8.743;

    sum = a + b ;
    cout << sum <<endl;
    cout <<fixed << setprecision(2) << sum;
    getch();
}
