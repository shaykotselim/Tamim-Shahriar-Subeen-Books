#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){

    double x , y , x_plus_y, x_minus_y;

    cout<<"Enter the value of x + y : ";
    cin >> x_plus_y;
    cout << "Enter the value of x - y : ";
    cin >> x_minus_y;


    x = (x_plus_y + x_minus_y) / 2 ;
    y = (x_plus_y - x_minus_y) / 2 ;

    cout<<fixed << setprecision(2) <<" x = " << x <<endl ;
    cout<<fixed << setprecision(2) << " y = " << y;


    return 0;
}
