#include <iostream>;
#include <conio.h>;

using namespace std;

int main (){
    int n = 10;

    if(n < 0){
        cout << "The number is negative \n";
    }
    else if (n > 0){
        cout << "The Number is Positive \n";
    }
    else if (n == 0){
        cout << "The Number is Zero \n";
    }

    getch();
}
