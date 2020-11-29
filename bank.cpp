#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

// ~ Mark Gainan ~ CS 210 ~ Project 2 ~


void printReportHeader(char choice) {
// function to print headers for both reports that accepts report choice (a or b) as a parameter for with/without monthly deposits
    if (choice == 'a') {
        cout << "   Balance and Interest Without Additional Monthly Deposits  " << endl;
        cout << string(70, '=') << endl;
        cout << "    Year        " << "Year End Balance       " << "Year End Earned Interest" << endl;
        cout << string(70, '-') << endl;
    }
    else if (choice == 'b') {
        cout << "      Balance and Interest With Additional Monthly Deposits  " << endl;
        cout << string(70, '=') << endl;
        cout << "    Year        " << "Year End Balance       " << "Year End Earned Interest" << endl;
        cout << string(70, '-') << endl;
    
    }
    else {
        cout << "You can only use this function with a or b" << endl;
    }
}

// interest calculator function
void interestCalculator(double investmentAmount, double monthlyDep, double interestRate, double numYears) {
    // spacer variable to space out fields
    string spacer = string(17, ' ');
    double currentValue;
    // interest earned per month
    double interestEarned;
    
    
    
    
    // set current value as initial investment to start the loop
    currentValue = investmentAmount;

    
    // print header for report A
    printReportHeader('a');
    
    // loop for report A
    for (int i = 0; i < numYears; ++i) {
        interestEarned = currentValue * (interestRate/100);
        currentValue = currentValue + interestEarned;
        cout << i + 1 << spacer << "$" << currentValue << spacer << "$" << interestEarned << endl;
        cout << endl;
    }
    // print header for report B
    printReportHeader('b');
    
    // reset current value to initial investment
    currentValue = investmentAmount;
    // loop for report B
    for (int i = 0; i < numYears; ++i) {
        currentValue = currentValue + (monthlyDep * 12);
        interestEarned = currentValue * (interestRate/100);
        currentValue = currentValue + interestEarned;
        cout << i + 1 << spacer << "$" << currentValue << spacer << "$" << interestEarned << endl;
        cout << endl;

    }
   

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
    cout << "Press any key to continue (Press X to exit) . . ." << endl;
    // FIXME: set up a trigger for the interestCalculator function
    // add interest calculator function 
    interestCalculator(invAmount, monthlyDeposit, annualInterest, numYears);
    

}

// main function
int main() {
    // formatting output to 2 decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
//printHomeScreen();
interestCalculator(100,10,7,5);
return 0;

}