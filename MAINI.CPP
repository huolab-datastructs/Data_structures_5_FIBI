#include <iostream>
#include "FIBI.H"
using namespace std;
void main() {
   int n;
   while (1) {
      cout << "Which Fibonacci number do you want?" << endl;
      cout << "Enter a negative number to stop." << endl;
      cin >> n;
      if (n > -1) cout << "... " << fibonacci(n) << endl;
      else break;
   }
}
