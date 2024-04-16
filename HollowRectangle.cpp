// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    
    cout << "enter the number of rows you want" << endl;
    cin >> n;
    for (int rows = 0; rows < n; rows = rows + 1){
       if(rows == 0 || rows == n - 1){
           for(int cols = 0; cols < n; cols = cols + 1){
               cout << "* ";
           }
       }else{
           cout << "* ";
           for(int i = 0; i < n-2; i=i+1){
               cout << "  ";
           }
           cout << "*";
       }
       cout << endl;
        }
    }
