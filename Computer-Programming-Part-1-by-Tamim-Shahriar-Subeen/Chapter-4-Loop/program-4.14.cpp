#include <iostream>;

using namespace std;

int main (){
    int a , b , c;

    for (a = 1; a <=3; a++){
        for ( b = 1; b <= 3; b++){
            if ( b != a){
                for ( c = 1; c <= 3; c++){
                    cout << a << " " << b << " " << c  <<endl;
                }
            }
        }
    }

    cin.get();
    return 0;
}
