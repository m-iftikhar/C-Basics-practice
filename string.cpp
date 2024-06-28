#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "Hello";
//   pther way to declare a string
string str;
   string str1(6,'n');

 
  // string conecentation
  string fname="muhammad";
  string lname="iftikhar";
  string fullname = fname + lname;
  cout << fullname << endl;

//   append 
string fullname2=fname.append(lname);
cout <<  fullname2 << endl;
//   size or length
  cout << greeting.size() << endl;
  cout << greeting.length() << endl;
//   string acess
cout << greeting[2]<< endl;
//  to acess last character of string you can use this
cout << greeting[greeting.length()-1] << endl;

//  at()function 
cout << "string character 1:" << greeting.at(0) << endl;
cout << "string character 3:" << greeting.at(2) << endl;
 greeting.at(4)= 'i';
cout << "string character change:"<< greeting  << endl;
//  c-style string (an array of string characters)
  char mystring[]= "asad";
  cout << mystring << endl;
     cout << str1 << endl;;

//   getline
// string myname;
// cout << "what is your name:" << endl;
// getline(cin, myname);
// cout << "your name is :" << myname;
  return 0;
}


