#include<iostream>
using namespace std ;

int main(){
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;
    for (i = 0; i <10; i++ ){
        temp = ara[i];
        ara[i] = ara[9 - i];
        ara[9 - i] = temp;
    }

    for (i = 0; i < 10; i++){

        cout << ara[i] << endl;
    }

    return 0;
}
