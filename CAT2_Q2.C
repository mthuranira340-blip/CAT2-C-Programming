/*

name Mark Thuranira

reg no CT100/G/26254/25

des calculation of gross pay taxes net pay

*/

#include<stdio.h>

int main(){

float hours_worked, hourly_wage, gross_pay, taxes, net_pay;

printf("Enter hours worked in the week:\n");

scanf("%f",&hours_worked);

printf("Enter your hourly wage :");

scanf("%f",&hourly_wage);

if(hours_worked<=40)

{

gross_pay = hours_worked * hourly_wage;

}else

{
float regular_pay = 40 * hourly_wage;

float overtime_hours = hours_worked - 40;

float overtime_pay = overtime_hours * hourly_wage * 1.5;


gross_pay = regular_pay + overtime_pay;

}

if(gross_pay<=600)

{

taxes = gross_pay * 0.15;

}else

{

float taxes_first_tier = 600 * 0.15;

float taxes_second_tier = (gross_pay - 600) * 0.20;

taxes = taxes_first_tier + taxes_second_tier;

}

net_pay = gross_pay - taxes ;

printf("gross pay %.2f\n",gross_pay);

printf ("taxes%.2f\n",taxes);

printf("net pay%.2f\n",net_pay);

return 0;

}


