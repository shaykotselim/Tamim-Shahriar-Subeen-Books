#include <iostream>
#include <conio.h>

using namespace std;
int is_prime(int n){

    int i ;

    if(n < 2){
        return 0;
    }
    for( i = 2; i < n ; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main (){

    int n ;
    while (1){
        cout << "Enter A Number (Enter 0 To Exit ) : ";
        cin >> n;

        if( n == 0){
            break;
        }
        if( 1 == is_prime(n)){
            cout<< n << " is Prime Number " << endl;
        }
        else {
            cout << n << " is Not A Prime Number" <<endl;

        }
    }
return 0;
}
