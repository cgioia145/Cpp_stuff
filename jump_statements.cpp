//jump statements

#include <iostream>

using namespace std;


int main()
{
	//break statement
	for (int n=10; n>0; n--)
	{
		cout << n << ", ";
		if (n==3)
		{ 
			cout << "countdown aborted!" << endl;
			break;
		}
	}
	
	//continue statement
	for (int n = 10; n>0; n--) {
		if (n==5) continue;
		cout << n << ", ";
	}
	cout << "liftoff!\n";

	//goto statement
	int n=10;
	mylabel:
	cout << n << ", ";
	n--;
	if (n>0) goto mylabel;
	cout << "liftoff!\n"; 
	
}
