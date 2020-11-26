#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

// ~ Mark Gainan ~ CS 210 ~ Project 2 ~

// interest calculator function
void interestCalculator(double investmentAmount, double monthlyDep, double interestRate, double numYears) {
    double finalTotal;
    double numMonths = numYears * 12;
    finalTotal = (investmentAmount + monthlyDep) * ((interestRate/100)/12);
    double reallyFinal = finalTotal + investmentAmount + monthlyDep;
    // FIXME this math is very wrong
    cout << "~ wrapping up coding for tonight FIXME tomorrow ~" << endl;
    cout << "Your investment of $" << investmentAmount << " will be worth $" << reallyFinal << " After " << numMonths << " months." << endl;
   

}

// print home screen function
void printHomeScreen() {
    double invAmount;
    double monthlyDeposit;
    // this interest variable is for display purposes only so I'm just using an int set to 5 a double will be used in the math function
    double annualInterest;
    double numYears;

    // store app title as variable for re-usable code
    string appTitle = " Data Input ";
    // print decorative header 
    cout << string(40, '*') << endl;
    cout << string(14, '*') << appTitle << string(14, '*') << endl;
    // print out options and then accept user input
    cout << "Initial Investment Amount:" << endl;
    cout << "Monthly Deposit:" << endl;
    cout << "Annual Interest: " << endl;
    cout << "Number of years:" << endl;
    cout << "please type in values and press enter. . ." << endl;
    cin >> invAmount >> monthlyDeposit >> annualInterest >>  numYears;

    // print out user input data as stated
     // print decorative header 
    cout << string(40, '*') << endl;
    cout << string(14, '*') << appTitle << string(14, '*') << endl;
    // print out options and then accept user input
    cout << "Initial Investment Amount: " << "$" << invAmount << endl;
    cout << "Monthly Deposit: " << "$" << monthlyDeposit << endl;
    cout << "Annual Interest: " << annualInterest << "%" << endl;
    cout << "Number of years: " << numYears << endl;
    cout << "Press any key to continue . . ." << endl;
    // FIXME: set up a trigger for the interestCalculator function
    // add interest calculator function 
    interestCalculator(invAmount, monthlyDeposit, annualInterest, numYears);
    

}

// main function
int main() {
printHomeScreen();


return 0;

}