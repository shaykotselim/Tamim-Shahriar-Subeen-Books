#include <iostream>

using namespace std;

int main (){

int ara[4] = {5, 10, 15, 20};

    ara[0] = 100;
    ara[2] = 200;
    ara[3] = 300;

    cout << ara[0] << endl << ara[1] <<endl << ara[2] <<endl
     << ara[3];


    return 0;
}
