#include <bits/stdc++.h>

using namespace std;

int find_max (int ara[], int n);

int main (){
   int ara[] = {
        -100, 0, 53,22, 83, 23, 89, -132, 201, 3, 85
    };
    int n = 11;

    int max = find_max(ara, n);
    cout << max;
}
int find_max (int ara[], int n) {

    int max = ara[0];
    int i ;

    for (i = 0; i < n ; i++){
        if (ara[i] > max){
            max = ara[i];
        }
    }
    return max;
}
