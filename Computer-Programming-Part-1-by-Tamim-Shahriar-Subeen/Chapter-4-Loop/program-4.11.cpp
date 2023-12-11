#include <iostream>
#include <conio.h>

using namespace std;

int main (){

    int n, m , i, j;

    cin >> n;

    for (i = 0; i <= n; i++){
        cin >> m;
        for(j = 10; j <= m; j++){
            if(j % 11 == 0){
                continue;

            }
            cout << j << endl;
        }

    }
    return 0;
}
