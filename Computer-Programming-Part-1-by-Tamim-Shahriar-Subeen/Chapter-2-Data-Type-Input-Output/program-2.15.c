#include <stdio.h>;

int main (){
    int num1 , num2, value;
    char sign;

    printf("Pelease Enter a Number : ");
    scanf("%d", &num1);

    printf("Enter another number : ");
    scanf("%d", &num2);

    value = num1 + num2;
    sign = '+';
    printf("%d %c %d = %d\n", num1 , sign , num2 , value);

    value = num1 - num2;
    sign = '-';
    printf("%d %c %d = %d\n", num1 , sign , num2 , value);

    value = num1 * num2;
    sign = '*';
    printf("%d %c %d = %d\n", num1 , sign , num2 , value);

    value = num1 / num2;
    sign = '/';
    printf("%d %c %d = %d\n", num1 , sign , num2 , value);


    return 0;
}
