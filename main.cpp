#include <iostream>
using namespace std;

// Reading 
#include "read_number_positive_int.h"

// Calculating
#include "total_months.h"

// Printing
#include "print_number_int_with_double_msg.h"

/*
    * Program to 
        # Read a LoanAmount & Monthly Payment and 
        # Calculate how many months you need to settle the loan.

    * ReadPositiveNumber ==> LoanAmount
    * ReadPositiveNumber ==> MonthlyPayment
    * Calculating ==> how many months must pay. ==>totalMonths =  loan / monthly payment 
    * Printing ==> Result
         
         loan = 5000 
         monthly payment = 500  
        5000 / 500 
*/



int main(){

    //Reading
    int loanAmount = ReadNumberPositiveInt("Enter a Loan Amount: ");
    int monthlyPayment = ReadNumberPositiveInt("Enter a Monthly Payment: ");

    //Calculating
    int totalMonths = ToatalMonths(loanAmount, monthlyPayment);

    // Printing
    PrintNumberIntWithDoubleMsg("Loan Amount = ",loanAmount , ".");
    PrintNumberIntWithDoubleMsg("Monthly Payment ", monthlyPayment, ".");
    PrintNumberIntWithDoubleMsg("Total Months To Pay = ", totalMonths," months.");



    return 0;
}