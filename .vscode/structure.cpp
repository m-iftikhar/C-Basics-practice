#include <iostream>
using namespace std;
int main(){
  struct {
    int number;
    string name;
  } mystructure;


  mystructure.number=20;
  mystructure.name="iftikhar";
  cout <<  mystructure.number << endl;
   // Multiple structure variables separated with commas
   struct {
  int myNum;
  string myString;
} myStruct1, myStruct2, myStruct3;

// Declare a structure named "car"
struct car {
  string brand;
  string model;
  int year;
};


  // Create a car structure and store it in myCar1;
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Create another car structure and store it in myCar2;
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;
 
  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

  return 0;

}