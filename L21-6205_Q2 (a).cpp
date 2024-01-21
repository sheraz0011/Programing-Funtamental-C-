#include <iostream>
using namespace std;
int main() {
    unsigned long long int number;  unsigned long long int c; unsigned long long int Total_Sum=1;
    unsigned long long int remain = 0;
    unsigned long long int total = 0;
    cout << "Enter Your Decimal Number =";
    cin >> number;
    for (c = 1; number > 0; c++) 
        {
            remain = number % 2;
            number = number / 2;
            total =( total + (remain * Total_Sum));
            Total_Sum = Total_Sum * 10;
        }
    cout << "Binary Number ="<<total;
      
    

       return 0;
}