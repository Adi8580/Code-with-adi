#include <stdio.h>
#include <math.h>

int main() {
    // Initialize variables for the principal amount, interest rate, time, 
    // number of compounding periods, compound interest (CI), and final amount (A)
    double principle, rate, time, n, CI, A;

    // Prompt the user to enter the principal amount
    printf("Enter the principal amount: ");
    // Take the principal amount as input
    scanf("%lf", &principle);

    // Prompt the user to enter an annual interest rate in percentage (for example, 5% for five years).
    printf("Enter the annual interest rate (e.g., for 5%%, enter 5): ");
    // Take the annual interest rate as input
    scanf("%lf", &rate);
    // Convert the entered interest rate to a decimal
    rate = rate / 100;

    // Prompt the user to enter the time in years
    printf("Enter the time (in years): ");
    // Take the time as input
    scanf("%lf", &time);

    // Prompt the user to enter the number of times that interest is compounded per year
    printf("Enter the number of times that interest is compounded annually: ");
    // Take the number of compounding periods as input
    scanf("%lf", &n);

    // Calculate the final amount after time 't' with compound interest
    A = principle * pow((1 + rate / n), n * time);
    // Calculate the compound interest by subtracting the principal from the final amount
    CI = A - principle;

    // Print the compound interest
    printf("The compound interest is: %.2lf\n", CI);
return 0;
}