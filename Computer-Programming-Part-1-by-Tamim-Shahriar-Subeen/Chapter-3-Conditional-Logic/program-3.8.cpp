#include <iostream>;
#include <conio.h>;

using namespace std;

int main (){
    int number , remainder ;

    number = 5;
    remainder = number % 2;

    if (remainder == 0){
        printf("The Number is even \n");
    }
    else {
        printf("The number is odd \n");
    }

    getch ();
}
