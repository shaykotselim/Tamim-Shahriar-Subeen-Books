#include <iostream>;
#include <conio.h>;

using namespace std;

int main(){
    int n = 0;

    while (n < 10 ){
        n = n + 1;
        if (n % 2 == 0){
            continue;
        }
        cout << n << "\n";
    }

    getch ();
    }
