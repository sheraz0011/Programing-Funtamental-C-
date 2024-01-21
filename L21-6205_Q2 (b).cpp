#include <iostream>
using namespace std;
int main() {
    unsigned long long int number;  unsigned long long int c; unsigned long long int Total_Sum = 0; unsigned long long int p = 0;
    unsigned long long int remain = 0;
    unsigned long long int total = 0;
    cout << "Enter Your binary Number =";
    cin >> number;
    for (c = 0; number > 0; c++)
    {
        remain = number % 10;
        number = number / 10;
        p = (remain * pow(2, c));
        Total_Sum = Total_Sum + p;
    }
    cout << "decimal Number =" << Total_Sum;



    return 0;
}