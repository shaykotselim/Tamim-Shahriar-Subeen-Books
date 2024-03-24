#include <iostream>
#include <conio.h>
using namespace std;

int string_length(char str[]){
    int i , length;

    for(i = 0; str[i] != '\0'; i++){
        length++;
    }
    return length;
}

int main (){

    char country[100];
    int length;

    while( 1 == scanf("%s", country)){
        length = string_length(country);
        cout << "Length : " << length <<endl;
    }
    return 0;
}
