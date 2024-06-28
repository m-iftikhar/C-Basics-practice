#include <iostream>
using namespace std;

int main() {
    // break
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    cout << i << "\n";
  } 
//   continue
for (int i = 0; i < 10; i++) {
    if (i == 4) {
      continue;
    }
    cout << i << "\n";
  }
  return 0;
}

