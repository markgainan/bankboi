#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

// ~ Mark Gainan ~ CS 210 ~ Project 2 ~

// interest calculator function
void interestCalculator(double investmentAmount, double monthlyDep, int numYears) {
    double interestRate = 0.05;
    double finalTotal;
    double numMonths = numYears * 12;
    finalTotal = investmentAmount * (1 + 5/100) * numMonths;
    // FIXME this math is very wrong
    cout << "~ wrapping up coding for tonight FIXME tomorrow ~" << endl;
    cout << "Your investment of $" << investmentAmount << " will be worth $" << finalTotal << " After " << numMonths << " months." << endl;

}

// print home screen function
void printHomeScreen() {
    double invAmount;
    double monthlyDeposit;
    // this interest variable is for display purposes only so I'm just using an int set to 5 a double will be used in the math function
    int annualInterest = 5;
    int numYears;

    // store app title as variable for re-usable code
    string appTitle = " Data Input ";
    // print decorative header 
    cout << string(40, '*') << endl;
    cout << string(14, '*') << appTitle << string(14, '*') << endl;
    // print out options and then accept user input
    cout << "Initial Investment Amount:" << endl;
    cout << "Monthly Deposit:" << endl;
    cout << "Number of years:" << endl;
    cout << "please type in values and press enter. . ." << endl;
    cin >> invAmount >> monthlyDeposit >> numYears;

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
    

}

// main function
int main() {
//printHomeScreen();
interestCalculator(50.00, 50.00, 3);

return 0;

}