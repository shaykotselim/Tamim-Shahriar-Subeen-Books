#include <bits/stdc++.h>;

using namespace std;

int test_function(int x ){
    int y = x ;
    x = 2 * y;
    return (x * y);
}
int main (){
    int x = 10 , y = 20, z = 30;
    z = test_function(x);
    cout <<" "<<x <<" "<< y <<" "<<z;

return 0;
}
