#include<iostream>
#include<string>
using namespace std;

int main() {
	string input;
	cout << "Knock Knock" << endl;
	getline(cin, input);
	if (input.compare("Who's there?") == 0)
		cout << "Hakame" << endl;
	else if (input.compare("Who's there?") != 0) {
		cout << "Try again foo, fix ye gremmear";
	}
	getline(cin, input);
	if (input.compare("Hakame who?") == 0)
		cout << "Hakame in like a wrecking ball!" << endl;
	else if (input.compare("Who's there?") != 0) {
		cout << "Try again foo, fix ye gremmear";
	}

}