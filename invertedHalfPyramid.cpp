// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
  // Write C++ code here
  int n;
  cout << "Enter Number Of Rows You Want" << endl;
  cin >> n;
  for (int rows = 1; rows <= n; rows = rows + 1) {
    for (int cols = n - rows; cols >= 0; cols = cols - 1) {
      cout << "*";
    }
    cout << endl;
  }
}