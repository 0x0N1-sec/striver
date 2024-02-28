#include<iostream>
using namespace std;

int main() {
  // Write your code here
  int n;
  cin >> n;
  string nString = to_string(n);
  int eTotal = 0;
  int oTotal = 0;

  for(int i = 0; i < nString.length(); i++)
  {
	  int checker = nString[i] - '0';

	  if(checker % 2 == 0)
	  {
		  eTotal += checker;
	  }
	  else
	  {
		  oTotal += checker;
	  }
  }
  cout << eTotal << " " << oTotal;

  return 0;
}