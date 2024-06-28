#include <iostream>
using namespace std;

int main() {
  int time = 22;
  if (time < 10) {
    cout << "Good morning.";
  } else if (time < 20) {
    cout << "Good day.";
  } else {
    cout << "Good evening.";
  }
  //   short hand trnary operator
// Online C++ compiler to run C++ program online

  int number=20;
          string result=(number>30) ? "number is 20" : "number is another" ;
          
          cout << result ;
  return 0;
}


