#include <bits/stdc++.h>;
using namespace std;

int main (){


 int ara[] = {1, 4, 6, 8, 9 , 11, 14, 15, 20, 25, 33 , 83, 87, 97, 99, 100};

    int low_index = 0;
    int high_index = 15;
    int mid_index;
    int num = 97;

    while (low_index <= high_index){
        mid_index = (low_index + high_index) / 2;
        if(num == ara[mid_index]){
            break;
        }
        if(num < ara[mid_index]){
            high_index = mid_index - 1;
        }
        else{
            low_index = mid_index + 1;
        }
    }
    if(low_index > high_index){
    //printf("%d is not in the array\n", num);
        cout<< num << "is not in the array\n";
    }
    else{
    //printf("%d is found in the array . It is the %d th element of the array.\n", ara[mid_index], mid_index);
    cout <<ara[mid_index] <<" is found in the array. It is the "<<mid_index <<" th element of the array.";
    }
}
