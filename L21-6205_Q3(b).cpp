#include <iostream>
using namespace std;

int main() {
    int number;  int reversed; int  remainder; int total;
  cout << "Input Any Number =";
    cin >> number;
    total = number;
    for (reversed = 0; number > 0;number=number/10) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
    }
    cout << "The Reversed Number= " << reversed<<endl;
    if (reversed == total)
        cout << "palindrome";
    else
        cout << "not a palindrome";

   
    return 0;
}