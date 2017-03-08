#include<iostream>
using namespace std;
int main() {
	int counter = 0;
	char input = 'b';
	while (input == 'b') {//game loop
		cin >> input;
		if (input == 'b')
			counter += 1;
	}
	cout << counter;




}//hi
