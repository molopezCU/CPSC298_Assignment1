/*
Moises Lopez
2297564
molopez@chapman.edu
CPSC 298-01
Assignment 1

This program will calculate inflation for an item over a user
defined time period.

*/

#include <iostream>

using namespace std;
int main(int argc, char **argv){
  double itemPrice, inflationRate, inflatedPrice;
  int timePeriod;

  //base price
  cout << "What is the price of the item at this current time: " << endl;
  cin >> itemPrice;

  //number of years
  cout << "Number of years from now that the item will be purchased: " << endl;
  cin >> timePeriod;

  //inflation rate
  cout << "What is the inflation rate?: " << endl;
  cin >> inflationRate;
  while(inflationRate > 100){
    cout << "Please enter an inflation rate lesser than or equal to 100." << endl;
    cin >> inflationRate;
  }

  //setting the inflation rate to a percentage
  inflationRate = inflationRate / 100;
  inflatedPrice = (inflationRate * itemPrice);

  for(int i = 1; i <= timePeriod; ++i){
    itemPrice = itemPrice + inflatedPrice;
    cout << "Price of item " << i << " year(s) from now: " << itemPrice << endl;
  }
  return 0;
}
