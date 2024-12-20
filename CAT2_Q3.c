//A program fo work in hours in a week and the hourly wage

#include <stdio.h>

int main() {
      // Geting users input for hours worked and hourly wage
    float hours_worked, hourly_wage, gross_pay, taxes, net_pay;

  
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);

    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

   // Calculating gross pay with overtime pay for hours over 40
    if (hours_worked <= 40) {
        gross_pay = hours_worked * hourly_wage;
    } else {
        gross_pay = (40 * hourly_wage) + ((hours_worked - 40) * hourly_wage * 1.5);
    }

        // Calculating taxes based on gross pay

    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    }
 // Calculating net pay
    net_pay = gross_pay - taxes;

    //Displaying the results
    printf("\nPay Details:\n");
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}
