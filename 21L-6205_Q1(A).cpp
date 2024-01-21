#include<iostream>
using namespace std;
int main() {
	int maximum = 0;
	int total = 0;
	int	index = 0;

	const int S = 10;

	int l[S] = { 3,4,5,3,6,3,2,9,1,2 };

	int num[3];
	for (int i = 0; i < S; i++)
	{
		total = 0;

		for (int k = i; k < i + 3;)
		{
			total = total + l[k];
			k++;
		}
		if (total > maximum)
		{
			maximum = total;

			for (int j = i; j < i + 3; )
			{
				num[index] = l[j];

				index = index + 1;

				j++;
			}
			index = 0;
		}
	}
	cout << "Maximum is = ";

	cout << maximum;
	cout << "\n";
	cout << "Numbers are = ";
	for (int i = 0; i < 3;)
	{
		cout << num[i] << " ";
		i = i + 1;
	}
}