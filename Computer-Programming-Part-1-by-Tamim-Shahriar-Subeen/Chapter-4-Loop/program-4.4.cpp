#include <iostream>;
#include <conio.h>;

using namespace std;

int main (){
    int n =1;

    while (n <= 100){
        cout << n << endl;
        n ++;

        if (n > 10){
            break;
        }
    }
    getch();
}
