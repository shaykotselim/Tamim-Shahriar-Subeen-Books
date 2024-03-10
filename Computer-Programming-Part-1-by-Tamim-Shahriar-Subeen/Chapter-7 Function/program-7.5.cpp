#include <bits/stdc++.h>

using namespace std;

double add(double x , double y);

int main () {

    double a, b , c;

    a = 2.7;
    b = 2.8;
    c = add(a, b);
    cout << fixed << setprecision(4);
    cout << c;
    return 0;
}
double add (double x, double y){

    double sum = x + y;
    return sum ;
}
