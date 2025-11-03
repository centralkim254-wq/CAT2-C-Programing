/*
Name: Allan kimutai
Reg: PA/106/G/28722/25
programm for hours_worked in a week 
*/
#include <stdio.h>
int main() 
{
float hours_worked, hourly_wage;
float regular_pay, overtime_pay, gross_pay;
float tax_rate_1 = 0.15;
float tax_rate 2 = 0.20:
float tax_threshold = 600.0;
float taxes, net_pay;

// Request user input for hours worked and hourly wage

printf("Enter the hours worked in a week: ");
scanf("%f", &hours_worked);
printf("Enter the hourly wage: ");
scanf("%f", &hourly_wage);

// Calculate gross pay

if (hours_worked > 40) 
{
regular_pay = 40 * hourly_wage;
overtime_pay = (hours_worked - 40) * (1.5 * hourly_wage);
gross_pay = regular_pay + overtime_pay;

} else {

gross_pay = hours_worked * hourly_wage;

}
// Calculate taxes
if (gross_pay > tax_threshold) {
taxes = (tax_threshold * tax_rate_1) + ((gross_pay - tax_threshold) *
tax_rate_2);

} else {

taxes = gross_pay * tax_rate_1;

}
// Calculate net pay
net_pay = gross_pay - taxes;

// Print the results

printf("\nGross Pay: $%.2f\n", gross_pay);
printf("Taxes: $%.2f\n", taxes);
printf("Net Pay: $%.2f\n", net_pay);

return 0;
