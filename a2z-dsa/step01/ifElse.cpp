#include <bits/stdc++.h>

using namespace std;

string compareIfElse(int a, int b);

int main()
{
    cout << compareIfElse(3, 9);

    return 0;
}


string compareIfElse(int a, int b) {
	// Write your code here
	if(a < b)
	{
		return "smaller";
	}
	else if(a > b)
	{
		return "greater";
	}
	else
	{
		return "equal";
	}
}
