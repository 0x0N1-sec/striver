#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<double> a = {1.3, 4.5};
    areaSwitchCase(2, a);

    return 0;
}

double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	double pi = 2*acos(0.0);
	switch(ch) {
		case 1:
			return pi * a[0] * a[0];
		case 2:
			return a[0] * a[1];
			break;
		default:
			return -1.0;
			break;
	}
}
