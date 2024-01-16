#include <iostream>;
#include <conio.h>;

using namespace std;

int main (){
    int n, sum ;

    cout<< "Enter the number : ";

    cin >> n;

    sum = (n * (n + 1) / 2);

    cout << "Summation is : " << sum ;

    getch();
}
