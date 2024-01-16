#include <iostream>;
#include <conio.h>;

using namespace std;

int main (){
    double a1, a2, b1, b2 ,c1, c2, d, x , y;

    cout << "a1 = ";
    cin >> a1;

    cout << "a2 = ";
    cin >> a2;

    cout << "b1 = ";
    cin >> b1;

    cout << "b2 = ";
    cin >> b2;

    cout << "c1 = ";
    cin >> c1;

    cout << "c2 = ";
    cin >> c2;

    d = a1 * b2 - a2 * b1;

    if ((int) d == 0 ){
        cout << "Value of x and y can not be determined. \n" ;
    }else {
        x = (b2 * c1 - b1 * c2) / d ;
        y = (a1 * c2 - a2 * c1) /d ;

        cout << "x = " << x << endl  <<"y = "<< y;

    }
    getch();
}
