#include <iostream>
#include <conio.h>
using namespace std;
// ---------------Fix with problem ----------
int main (){
    char str1[] = "bangla", str2[] = "desh" , str3[12];
    int i,j, length1 = 6, length2 = 4;

    for (i = 0, j = 0; i < length1; i++, j++){
        str3[j] = str1[i];
    }

    // fix the problem here
    // befor this line  for ( i = 0, j = 0; i < length2; i++, j++)

    for (i = 0; i < length2; i++, j++){
        str3[j] = str2[i];
    }
    str3[j] = '\0';
    cout << str3;
    return 0;
}
