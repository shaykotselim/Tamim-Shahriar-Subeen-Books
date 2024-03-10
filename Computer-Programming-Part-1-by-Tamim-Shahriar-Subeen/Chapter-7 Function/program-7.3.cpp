#include <bits/stdc++.h>;

using namespace std;
double add (double n1, double n2){

    double sum = n1 + n2;
    return sum;
}

int main (){
    double a , b , c ;

    a = 2.7;
    b = 2.8;
    c = add(a, b);
    cout << fixed << setprecision(4);
    cout << c;

return 0;
}
