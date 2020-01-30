#include <iostream>

using namespace std;
int main(int argc, char **argv){

  //member variables
    unsigned int roomCapacity;
    unsigned int roomAttendance;
    unsigned int spotsRemaining;

    cout << "What is the room capacity?: " << endl;
    cin >> roomCapacity;
    cout << "How many people are in the room?: " << endl;
    cin >> roomAttendance;

    if(roomAttendance > roomCapacity){
       cout << "The meeting cannot be held as planned due to fire regulations." << endl;
       spotsRemaining = roomAttendance - roomCapacity;
       cout << spotsRemaining << ": person(s) must be excluded. And no they do not get paid." << endl;
    } else if (roomAttendance == roomCapacity){
      cout << "Maximum room capacity." << endl;
    } else {
      cout << "The meeting is withing fire safety laws. Proceed as planned." << endl;
      spotsRemaining = roomCapacity - roomAttendance;
      cout << spotsRemaining << ": person(s) can be addded to the meeting before violating fire safety law." << endl;
    }

  return 0;

}
