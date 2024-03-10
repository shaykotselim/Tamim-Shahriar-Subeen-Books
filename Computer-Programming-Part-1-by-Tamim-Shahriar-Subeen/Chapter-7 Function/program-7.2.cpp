#include <bits/stdc++.h>;

using namespace std;

int add (double num1, double num2){
    double sum = num1 + num2;
    return sum;
}

int main (){
    double a, b, c ;

    a = b = 2.5;

    cout << fixed << setprecision(4);

    c = add(a, b);
    cout << c;

return 0;
}
