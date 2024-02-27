#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char userInput = 'a';
	cin >> userInput;

	if(userInput >= 65 && userInput <= 90)
	{
		cout << 1;
	}
	else if(userInput >= 97 && userInput <= 122)
	{
		cout << 0;
	}
	else
	{
		cout << -1;
	}
}
