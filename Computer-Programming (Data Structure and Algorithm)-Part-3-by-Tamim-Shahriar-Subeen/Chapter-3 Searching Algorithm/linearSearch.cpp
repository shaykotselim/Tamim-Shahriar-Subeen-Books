#include <iostream>;
using namespace std;
// <------------Linear Search--------------->
int linearSearch(int A[], int n, int x);

int main (){
    int sizeofArr, target, results;
    int arr[]={10, 12, 13, 14, 16, 18, 20, 22, 32};
     sizeofArr = sizeof(arr)/ sizeof(arr[0]);
     target = 2;

     results = linearSearch(arr, sizeofArr, target);
     if(results != -1){
        cout << "The Element of Index is : " <<results;
     }else{
        cout << "The Element Can't found this Array!";
     }


}

int linearSearch(int arr[], int arrOfSize, int target){

    int i;
    for(i = 0; i < arrOfSize; i++){
        if(arr[i] == target){
            return i;
        }
    }
    i = -1;
    return i;
}
