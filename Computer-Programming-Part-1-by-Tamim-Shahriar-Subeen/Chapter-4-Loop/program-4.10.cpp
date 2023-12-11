#include <iostream>;

using namespace std;

int main (){

    int i , j ;
    for(i = 1; i <= 20; i++){
        for (j = 1; j <=10; j++){
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }
    cin.get();

    return 0;
}
