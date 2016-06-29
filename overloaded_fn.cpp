//overloaded functions and function templates

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int operate (int a, int b)
{
	return (a*b);
}

double operate (double a, double b)
{
	return (a/b);
}

//template for sum function
template <class T>		//template <class SomeType>
T sum (T a, T b)		//SomeType function (SomeType a, SomeType b)
{
	T result;
	result = a+b;
	return result;
}

//template with multiple parameters
template <class T, class U>
bool are_equal (T a, U b)
{
  return (a==b);
}

//non-type template arguments
template <class T, int N>
T fixed_multiply (T val)
{
  return val * N;
}


int main()
{
	//overloaded function
	int x=5, y=2;
	double n=5.0, m=2.0;
	cout << operate (x,y) << endl;
	cout << operate (n,m) << endl;
	
	//using the template
	int i=5, j=6, k;
	double f=2.0, g=0.5, h;
	k= sum<int>(i,j);
	h= sum<double>(f,g);
	cout << k << endl;
	cout << h << endl;
	
	//template with multiple parameters example
	int a, b;
	string str;
	
	cout << "Enter an integer: ";
	getline (cin,str);
	stringstream(str) >> a;
	cout << "Enter another number: ";
	getline (cin,str);
	stringstream(str) >> b;
	if (are_equal(a,b))
		cout << "x and y are equal\n";
	else
		cout << "x and y are not equal\n";
	
	//non-type template arguments example
	std::cout << fixed_multiply<int,2>(10) << '\n';
	std::cout << fixed_multiply<int,3>(10) << '\n';
	
	return 0;
}
