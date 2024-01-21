#include <iostream>
//this liberary provides many predefined functions helpful for console or text
#include <conio.h>  
using namespace std;
void Search(char Word[][50], int a, int word_count, char b[])
{
	int match = 0;
	int i; 
	int j;
	for ( i = 0; i <=a; match=0) {
		int j = 0;
		while ( j < word_count) {
			if (b[j] == Word[i][j]) {
				match = match + 1;
			}
			j = j + 1;
		}
		if (match == word_count) {
			cout << "\n";		cout << Word[i];
			cout<< " ";
		
		}

		i = i + 1;
	}
}


int main() {
	int counter = 0;
	int i = 0;
	int j=0;
	char Words[22][50];
	char words[22][50] = {
						"apply",
						"application",
						"bat",
						"batch",
						"battle",
						"compute",
						"computer",
						"compare",
						"device",
						"develop",
						"developer",
						"function",
						"functional",
						"fucntionality",
						"handle",
						"handler",
						"handling",
						"system",
						"systemic",
						"systole"
	};

	for ( int i = 0; i <= 22; ) {
		int j = 0;
		while( j <= 50) {

			Words[i][j] = words[i][j];

			j=j+1;
		}

		i=i+1;
	}


	char array[50];
	for (; 1;) {
		array[i] = _getch();
		//command on some operating systems that clears the screen
		system("cls");

		counter=counter+1;
		for (int i = 0; i < counter; ) {
			cout << array[i];
			cout<< " ";
			i=i+1;
		}
	
		if (array[i] == 13) {

			system("cls");
			cout << "You Pressed Enter";
			cout<< "\n";
		
		}
		else if (array[i] == '0') {

			break;
		}
		else {
			Search(Words, 22, counter, array);
		}
		i=i+1;
	}
	cout << "\n";
	cout << "Terminated";
	cout<< "\n";
	return 0;
}