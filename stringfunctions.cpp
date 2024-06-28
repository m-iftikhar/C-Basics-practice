#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    // Initialize a string with a value
    string value = "asadghjklkl";
    cout << "Original string: " << value << endl;

    // Clear the string
    value.clear();

    // Check if the string is empty and output the result
    if (value.empty()) {
        cout << "String is empty" << endl;
    } else {
        cout << "String is not empty" << endl;
    }

    // Compare two strings and output the comparison result
    string s1 = "abc";
    string s2 = "xyz";
    int comparisonResult = s2.compare(s1);
    cout << "Comparison result (s2 compared to s1): " << comparisonResult << endl;

    // erase 
    string a="computer";
    a.erase(3,3);
    // after this put will remove
    cout << a << endl;

    // find -> ye jo h uska phla index return krta h 
    
    cout << a.find("er") << endl;
    a.insert(3,"put");
    cout << a << endl;
    //  substr
    string name="muhammad iftikhar";
     string myname = name.substr(4,8);
    cout << myname << endl;
//     convert string into int
   string number= "786";
     int x= stoi(number);
     cout << x+2 << endl;
//  convert int to string  > to_string use krna h 


// / sort > arrange ho jatay hein sorted
// issy phlay #include <algorithm import krna h 
  string hello = "hihellokesyho ";
    sort(hello.begin(), hello.end());
    cout << hello << endl;
    

    return 0;
}
