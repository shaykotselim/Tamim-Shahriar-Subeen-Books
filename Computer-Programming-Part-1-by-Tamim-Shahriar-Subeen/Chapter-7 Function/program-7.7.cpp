#include <bits/stdc++.h>;

using namespace std;
double pi = 3.14;
void my_fnc(){
    pi = 3.1416;
}
int main (){
    cout << pi << endl;
    my_fnc();
    cout << pi;
return 0;
}
