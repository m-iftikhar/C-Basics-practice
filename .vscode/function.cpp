#include <iostream>
#include<string>
using namespace std;


// Function declaration
void myFunction(string name );
// dafault parameter value
void myFunction2(string country = "Norway") {
  cout << country << "\n";
}
// using return method
int myFunction3(int x, int y) {
  return x + y;
}

// The main method
int main() {
  myFunction("function");
  myFunction2(); // call the function
  myFunction3(5,4); // call the function
  return 0;
}

// Function definition
void myFunction( string name) {
  cout << "I just got executed!"  << name << endl;
}