#include <iostream>
using namespace std;
int main()
{	int number0; int number1; int i=0 ;
	int number2; int total = 0;
	int power; int remainder;
	cout<<"Enter Any Number to Find Special Number = ";
	cin>>number0;
	for (int c = number0; c >=0; c--) {
		number1 = c;
		for ( i = 0; number1 > 0;i=i+1) {
			number1 = number1 / 10;
		}
		for (number2 = c; number2 > 0; number2 = number2 / 10) {
			remainder = number2 % 10;
			total = total + pow(remainder, i);
		}
		if (total == c) {
			cout <<"   Special Number    =   "<<total << endl<<"  ";
		}
		total = 0;
	}
	return 0;
}