//program for calculating gross pay taxes and net pay
/*
Author: Stephen mwendwa 
Date: 6/11/2024
*/
#include<stdio.h>
int main() {
    float Hours_Worked,Hourly_Wage,Gross_Pay,Net_Pay,Taxes;
    float Regular_Hours = 40.0,Over_time_Rate = 1.5;
    float Tax_First_600_Rate = 0.15, Tax_Rest_Rate = 0.20;
    float first_600_Tax = 600.0;

    // Get user input
    printf("Enter Hours worked in a week: ");
    scanf("%f", &Hours_Worked);
    
    printf("Enter Hourly wage: ");
    scanf("%f", &Hourly_Wage);

    //  gross pay
    if (Hours_Worked <= Regular_Hours) {
        Gross_Pay = (Hours_Worked * Hourly_Wage);
    } else {
        Gross_Pay = ((Regular_Hours * Hourly_Wage) + ((Hours_Worked - Regular_Hours) * Hourly_Wage * Over_time_Rate));
    }

    //  taxes
    if (Gross_Pay <= first_600_Tax) {
        Taxes = Gross_Pay * Tax_First_600_Rate;
    } else {
        Taxes = (first_600_Tax * Tax_First_600_Rate) + ((Gross_Pay - first_600_Tax) * Tax_Rest_Rate);
    }

    // Calculate net pay
    Net_Pay = Gross_Pay - Taxes;

    // Display the results
    printf("Gross Pay: %.2fksh\n", Gross_Pay);
    printf("Taxes: %.2fksh\n", Taxes);
    printf("Net Pay: %.2fksh\n", Net_Pay);

    return 0;
}