#include <iostream>;
#include <conio.h>

using namespace std;

int main (){
    double loanAmount , interestRate, numberOfYears, totalAmount, monthlyAmount;

    cout << "Enter the loan Amount : ";
    cin >> loanAmount;

    cout << "Enter the interest rate : ";
    cin >> interestRate;

    cout << "Number of years : ";
    cin >> numberOfYears;


    totalAmount = loanAmount + loanAmount * interestRate * numberOfYears / 100 ;
    monthlyAmount = totalAmount / (numberOfYears * 12);

    cout << "Total Amount : " <<totalAmount << endl;
    cout << "Monthly Amount : " << monthlyAmount;

    getch();
}
