#include <iostream>
using namespace std;
int main() {
    for (int i=0; i<=10; i=i+2){
        cout << i << endl;
    }



    // nested loops
    for (int i=1; i<=2; i++){
        cout << "outer loop:" << i << endl;
        for(int j=1; j<=3; j++){
             cout << "innerloop:" << j << endl;
        }
    } 
    // print evennumbers from 0 to 20
    for(int i=2; i<=20; i++){
         if(i%2 == 0){
             cout << i << endl;
         }
    }

    // sum of 10 natural numbers
     int sum=0;
    for(int i=1; i<=10; i++){
        sum += i;
    }
   cout << "sum of 10 mnatural number is :" << sum <<endl;


//    multiplication table
 int number;
    cout << "enter number for table:" << endl;
    cin >> number;
    for(int i=1; i<=10;i++){
        cout << number*i << endl;
    }

    return 0;
}
