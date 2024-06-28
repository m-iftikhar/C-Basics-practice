#include <iostream>
using namespace std;
int main() {
    int num;
    char choice;
    do{
        cout << "enter a number:"<< endl;
        cin >> num;
        cout << "do you want to continue:" << endl;
        cin >> choice;
        
    } while (choice =='y' || choice == 'Y'); 
    cout << "end of program " << endl;

    return 0;
}
