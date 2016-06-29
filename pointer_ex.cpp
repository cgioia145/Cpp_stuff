//my first pointer

#include <iostream>
using namespace std;

int main()
{
	int firstvalue, secondvalue;
	int * mypointer;
	int * p1, * p2;
	int thirdvalue= 5, fourthvalue = 15;
	
	mypointer = &firstvalue;
	*mypointer = 10;
	mypointer = &secondvalue;
	*mypointer = 20;
	cout << "first value is " << firstvalue << endl;
	cout << "second value is " << secondvalue << endl;
	
	p1= &thirdvalue;		// p1= address of thirdvalue
	p2= &fourthvalue;		// p2= address of fourthvalue
	*p1 = 10;				// value pointed to by p1 = 10
	*p2 = *p1;				// value pointed to by p2 = value pointed to by p1
	p1 = p2;				// p1=p2 (value of pointer is copied
	*p1 = 20;				// value pointed to by p1 = 20
	
	cout << "thirdvalue is " << thirdvalue << endl;
	cout << "fourthvalue is " << fourthvalue << endl;
	
	return 0;
}
