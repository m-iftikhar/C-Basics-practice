#include <iostream>
using namespace std;
int main(){
    string food="pizza";
    string* ptr= &food;
     

    cout << food << endl;
    cout << *ptr << endl;
    cout << &food << endl;
    cout << ptr << endl;
    //    modify pointer value also chnge original value
       *ptr="burger";
     cout << food << endl;
    cout << *ptr << endl;
    //  there are three ways to to write :
//     string* mystring; // Preferred
//     string *mystring;
//    string * mystring;


    return 0;
}