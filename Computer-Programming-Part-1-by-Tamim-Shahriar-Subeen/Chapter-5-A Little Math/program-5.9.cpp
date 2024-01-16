#include <iostream>;

using namespace std;

int main (){
    int a, b ,t, x ,gcd;
    cin >>a >> b;

    if (a == 0) gcd = a;
    else if (b == 0) gcd = b;
    else {
        while(b != 0){
        t = b;
        b = a % b;
        a = t;
        }
        gcd = a;
    }
    cout << "GCD is : " <<gcd;
    return 0;
}
