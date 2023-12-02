#include <stdio.h>

int main (){
    int num1 , num2;

    printf("Please Enter a number : ");
    scanf("%d", &num1);
    printf("Plese Enter another Number : ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1 , num2 , num1 + num2);
    printf("%d - %d = %d\n", num1 , num2 , num1 - num2);
    printf("%d * %d = %d\n", num1 , num2 , num1 * num2);
    printf("%d / %d = %d\n", num1 , num2 , num1 / num2);
    return 0;
}
