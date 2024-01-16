#include <stdio.h>;
int main (){


    double loanAmount , interestRate , numberOFYears, totalAmount, monthlyAmount;

    printf("Enter the loan amount : ");
    scanf("%lf", &loanAmount);

    printf("Enter the interest rate : ");
    scanf("%lf", &interestRate);

    printf("Number of Years : ");
    scanf("%lf", &numberOFYears);

    totalAmount = loanAmount + loanAmount * interestRate * numberOFYears / 100.00;
    monthlyAmount = totalAmount /(numberOFYears * 12);

    printf("Total Amount : %0.2lf\n", totalAmount);
    printf("Monthly Amount : %0.2lf\n", monthlyAmount);

    return 0;
}
