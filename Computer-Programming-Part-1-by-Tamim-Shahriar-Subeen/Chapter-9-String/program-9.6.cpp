#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    char ara[100];
    while (NULL != gets(ara)){
        cout << ara;
    }
    return 0;
}
