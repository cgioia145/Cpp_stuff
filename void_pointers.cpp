//void pointers

#include <iostream>
using namespace std;

//void pointers represent the absence of type, therefore they point to
//a value that has no type (and undetermined length and properties)

//'increase' function with void pointer input
void increase (void* data, int psize)
{
	if ( psize == sizeof(char) )
	{ char* pchar; pchar=(char*)data; ++(*pchar); }
	else if (psize == sizeof(int) )
	{ int* pint; pint= (int*)data; ++(*pint); }
}

int main()
{
	char a = 'x';
	int b = 1602;
	increase (&a,sizeof(a));
	increase (&b,sizeof(b));
	cout << a << "," << b << endl;
	return 0;
}
