// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
  // Write C++ code here
  int n;
  cout << "Enter Number Of Rows You Want" << endl;
  cin >> n;
  for (int rows = 0; rows < n; rows = rows + 1) {
    for (int cols = 0; cols < n - rows; cols = cols + 1) {
      cout << cols + 1;
    }
    cout << endl;
  }
}