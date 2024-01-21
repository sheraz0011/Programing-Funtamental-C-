#include <iostream>
using namespace std;

int main() {
    int number;  int reversed; int  remainder;
  cout << "Input Any Number =";
    cin >> number;
    for (reversed = 0; number > 0;number=number/10) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
    }
    cout << "The Reversed Number= " << reversed<<endl;
    
    return 0;
}