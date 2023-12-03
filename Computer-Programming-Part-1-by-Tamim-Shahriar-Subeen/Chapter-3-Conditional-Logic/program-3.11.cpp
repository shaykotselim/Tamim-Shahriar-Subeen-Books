#include <iostream>;
#include <conio.h>;

using namespace std;

int main (){
    char ch = 'k';

    if(ch >= 'a' && ch <= 'z'){
        cout << ch << " is lower case";
    }
    else if (ch >= 'A' && ch <= 'Z'){
        cout << ch << " is upper case";
    }
    getch();
}
