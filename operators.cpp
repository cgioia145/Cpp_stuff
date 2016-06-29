// operators

#include <iostream>


int main()
{
	int a, b=3;
	a = b;
	a += 2;
	std::cout << a << std::endl; 
	//return 0;

	int c;
	
	a=2;
	b=7;
	c = (a>b) ? a : b;
	
	std::cout << "The conditional operator output is ";
	std::cout << c << std::endl;
	
	//explicit typecasting
	int i;
	float f = 3.14;
	std::cout << "This is pi! ";
	std::cout << f << std::endl;
	i = (int) f;
	std::cout << "Pi is now an integer, the inhumanity! See! --> ";
	std::cout << i << std::endl;
	
	return 0;
	
}
