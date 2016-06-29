//dynamic memory example

//use the command 'new' to intialize a pointer pointing to a chunk of memory
//use the command 'delete' to delete this pointer and free up memory again

#include <iostream>
#include <new>
using namespace std;

int main()
{
	int i,n;
	int * p;
	
	cout << "How many numbers would you like to type? ";
	cin >> i;
	
	//nothrow sets p to a nullpointer if memory can't be allocated
	p= new (nothrow) int[i]; 
	
	//check to see if p is a nullpointer (aka if the memory allocation worked)
	if (p == 0)
		cout << "Error: memory could not be allocated";
	else
	{
		for (n=0; n<i; n++)
		{
			cout << "Enter number: ";
			cin >> p[n];
		}
		cout << "You have entered: ";
		for (n=0; n<i; n++)
		{
		cout << p[n] << ", ";
		}
		cout << '\n';
		delete[] p;
	}
	return 0;
}
