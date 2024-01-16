#include <iostream>;

using namespace std;

int main (){
    int a, b , x, gcd;
    cout << "Enter Tow Number : ";
    cin >> a >> b;
    if(a < b){
        x = a;
    }else {
        x = b;
    }
    for ( ; x >= 1; x--){

        if (a % x == 0 && b % x == 0){
            gcd = x;
            break;
        }
    }
    cout << "Gcd is : " << gcd;
    return 0;
}
