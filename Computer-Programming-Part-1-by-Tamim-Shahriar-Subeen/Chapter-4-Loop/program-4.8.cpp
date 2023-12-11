#include <iostream>;

using namespace std;

int main (){
    int n = 5;
    int i =1;

    for ( ; ; ){

        if( i > 10){
            break;
        }
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }

    return 0;
}
