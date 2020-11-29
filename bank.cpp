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
    // interest earned
    double interestEarned;
    // set current value as initial investment to start the loop
    double currentValue;
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

// print homescreen function
void printHomeScreen() {
    // investment amount
    double invAmount;
    double monthlyDeposit;
    double annualInterest;
    // number of years
    double numYears;
    // char variable for users choice (continue or exit)
    char userChoice;

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
    // await user input
    cin >> userChoice;
    // either call the interest calculator function using their answers, or exit based on answer
    if (userChoice != 'X') {
    interestCalculator(invAmount, monthlyDeposit, annualInterest, numYears);
    }
    else if (userChoice == 'X') {
        cout << "Exiting program. Have a great day!" << endl;
    }
    

}

// main function
int main() {
    // formatting output to 2 decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    // call printHomeScreen() function
    printHomeScreen();
    //interestCalculator(100,10,7,5);
    return 0;

}