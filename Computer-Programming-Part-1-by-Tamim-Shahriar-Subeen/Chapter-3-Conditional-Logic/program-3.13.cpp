#include <iostream>;
#include <conio.h>;

using namespace std;

int main (){
    char ch = 'w';

    if (ch == 'a' || ch == 'e'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        cout << ch << " is vowel";
    }
    else {
        cout << ch << " is consonant";
    }
    getch ();
}
