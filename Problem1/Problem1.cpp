#include <iostream>

using namespace std;
int main(int argc, char **argv){

  unsigned int weightOz;
  double weightTon;

  cout << "Enter the weight of the cereal box(oz): " << endl;
  cin >> weightTon;

  weightTon = weightOz / 35273.92;

  cout << "Weight in tons: " << weightTon << endl;

  return 0;

}
