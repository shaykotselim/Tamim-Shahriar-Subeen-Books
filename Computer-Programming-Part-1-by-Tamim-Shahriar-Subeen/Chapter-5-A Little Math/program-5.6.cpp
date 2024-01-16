#include <iostream>;
#include <conio.h>;

using namespace std;

int main (){

    int i,n, sum;
    cout <<"Enter number :";
    cin>> n;
    sum = 0;
    for( i = 0; i <=n ; i++){
        sum = sum + i ;
    }

cout << "Summation is : " << sum;

    getch ();
}
