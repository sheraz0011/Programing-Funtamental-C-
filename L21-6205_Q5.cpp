#include <iostream>
using namespace std;
int main() {
    int count; int number; int total;
    cout << "Enter Number For Prime Factorization =";
    cin >> number;
    total = number;
    while (number % 2 == 0) {
        cout <<"2"<<" ";
        number = number / 2;
    }
    for (int i = 3; i <= number; i = i + 2) {
        while (number % i == 0) {
            cout << i << " ";
            number = number / i;
        }

        while (total == number)
        {
            cout << total << " is prime number"; 
            number = 0;
            break;

        }
    }
    return 0;
}