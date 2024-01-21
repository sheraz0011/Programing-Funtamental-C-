#include<iostream>
using namespace std;
int main()
{
	unsigned long long	int binary; unsigned long long int value;  unsigned long long int number=100000;
	unsigned long long int  j;
unsigned long long int terminate;
	cout<<"Enter 0 Or 1 = "<<endl;
	value=0;
	binary = 0;
	for (j = 1;binary== 0 || binary == 1; cin >> binary) {
		value = (value * 10) + binary;
		j++;
		if (j > 4) {
			terminate = value % number;
			if (terminate == 10101) {
				cout << " (Input Is Terminated) " << endl;
				break;
			}
		}
		
	}
	return 0;
}
