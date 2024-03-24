#include<iostream>;
#include<conio.h>;

using namespace std;

int main (){

     char country[] = {'B', 'a', 'n', 'g', 'l','a','d', 'e', 's', 'h', '\0'};
     int i , length;

     cout << country <<endl;
     length = 10;

     for (i = 0; i < length; i++){
        if (country[i] >= 97 && country[i] <= 122){
            country[i] = 'A' + (country[i] - 'a');
        }
     }
     cout << country;
     return 0;
    return 0;
}
