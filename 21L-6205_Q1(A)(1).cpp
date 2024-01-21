#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	int sum2 = 0;
	int num;
	int n[10];
	int arr[10] = { 3,4,5,3,6,3,2,9,1,2 };
	cout << "enter N :";
	cin >> num;
	for (int i = 0; i < 10; i++) {
		if (i != 10 - num) {
			for (int k = i; k < i + num; k++) {
				sum = sum + arr[k];
			}
			if (sum > sum2) {
				sum2 = sum;
				for (int j = i, m = 0; j < i + num; j++, m++) {
					n[m] = arr[j];
				}
			}
			sum = 0;
		}
		else
			break;
	}
	cout << "max " << num << " tuplet = " << sum2 << endl << "VALUES = ";
	for (int a = 0; a < num; a++) {
		cout << n[a] << " ";
	}
}