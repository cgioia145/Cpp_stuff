//functions example

#include <iostream>
using namespace std;

//I'm declaring functions before defining them! the madness!
void odd (int x);
void even (int x);


//add function
int addition (int a, int b)
{
	int r;
	r= a+b;
	return r;
}

//function of type 'void'
void printmessage()
{
	cout << "I'm a function! Neat!\n";
}

//function with default values
int divide (int a, int b=2)
{
	int r;
	r= a/b;
	return (r);
}


//main
int main()
{
	int z;
	z= addition(5,3);
	cout << "The result is: " << z << endl;
	
	printmessage();
	
	cout << divide(12) << endl;
	cout << divide(20,4) << endl;
	
	int i;
	do {
		cout << "Please enter number (0 to exit): ";
		cin >> i;
		odd(i);
	} while (i!=0);
	
	return 0;
} //end of program


//now we define the functions!
void odd (int x)
{
	if ((x%2)!=0) cout << "It's odd.\n";
	else even (x);
}

void even (int x)
{
	if ((x%2)==0) cout << "It's even.\n";
	else odd (x);
}
