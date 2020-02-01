/*
Moises Lopez
2297564
molopez@chapman.edu
CPSC 298-01
Assignment 1

The program converts an int weight in ounces to a double weight in tons.

*/

#include <iostream>

using namespace std;
int main(int argc, char **argv){

  //local variables
  unsigned int weightOz;
  double weightTon;

  cout << "Enter the weight of the cereal box(oz): " << endl;
  cin >> weightTon;

  //conversion (output is a double)
  weightTon = weightOz / 35273.92;

  cout << "Weight in tons: " << weightTon << endl;

  return 0;

}
