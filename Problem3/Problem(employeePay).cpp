/*
Moises Lopez
229564
molopez@chapman.edu
CPSC 298-01
Assignment 1

This program will calculate an employee's weekly earnings. Deductions from their
pay are printed out along with the gross and net pay for the week.

*/

#include <iostream>
#include <iomanip>

using namespace std;
int main(int argc, char **argv){
  //member variables
  double hoursWorked, overtimePay, grossPay, netPay;
  double payRate = 16.00;
  unsigned int fullTime = 40;
  double SSTax = 0.06;
  double fedIncome = 0.14;
  double stateIncome = 0.05;
  unsigned int medicalBill = 10;

  cout << "How many hours worked this week?: " << endl;
  cin >> hoursWorked;

  //calculates for overtime payment
  if(hoursWorked > fullTime){
    overtimePay = ((hoursWorked - fullTime) * 24.50);

    grossPay = (fullTime * payRate) + overtimePay;
    cout << "Gross pay: +$" << grossPay << endl;

    SSTax = SSTax * grossPay;
    cout << "Social Security Tax deduction: -$" << SSTax << endl;

    fedIncome = fedIncome * grossPay;
    cout << "Federal Income deduction: -$" << fedIncome << endl;

    stateIncome = stateIncome * grossPay;
    cout << "State Income deduction: -$" <<fixed << setprecision(2) << stateIncome << endl;

    cout << "Weekly medical bill deduction: -$" << medicalBill << endl;

    //calculates net pay
    netPay = grossPay - SSTax - fedIncome - stateIncome - medicalBill;
    //prints net pay
    cout << "Net pay for the week: $" << fixed << setprecision(2) << netPay << endl;

  } else {
    //calculates for <= 40 hours
    grossPay = hoursWorked * payRate;
    cout << "Weekly Gross pay: +$" << grossPay << endl;

    SSTax = SSTax * grossPay;
    cout << "Social Security Tax deduction: -$" << SSTax << endl;

    fedIncome = fedIncome * grossPay;
    cout << "Federal Income deduction: -$" << fedIncome << endl;

    stateIncome = stateIncome * grossPay;
    cout << "State Income deduction: -$" << fixed << setprecision(2) << stateIncome << endl;

    cout << "Weekly medical bill deduction: -$" << medicalBill << endl;

    //calculates net pay
    netPay = grossPay - SSTax - fedIncome - stateIncome - medicalBill;
    //prints net pay
    cout << "Net pay for the week: $" << fixed << setprecision(2) << netPay << endl;
  }
}
