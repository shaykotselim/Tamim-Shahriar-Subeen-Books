#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    char ch = 'W';

    if (ch >= 'a' && ch <= 'z'){
        cout <<ch << " is lower case \n";
    }if (ch >= 'A' && ch <= 'Z'){
        cout <<ch << " is upper case \n";
    }

    getch();
}
