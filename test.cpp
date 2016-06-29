//simple pointer script

#include <iostream>
using namespace std;

int main()
{
int myarray [5] = {1, 2, 3, 4, 5};
int * mypointer;
int myvar = 7;
int *foo = &myvar;
int *bar = foo;
int z = 5;
int * p = &z;

//pointers to pointers
char a;
char * b;
char ** c;
a= 'z';
b= &a;
c= &b;

mypointer = myarray;

cout << "Output of mypointer = myarray: " << mypointer << endl;
cout << "myvar= 7, *foo= &myvar, *bar= foo " << endl;
cout << "Output of foo: " << foo << endl;
cout << "Output of bar: " << bar << endl;
cout << "Output of *bar: " << *bar << endl;

cout << "Output of *p++: " << *p++ << endl;
cout << "Output of *++p: " << *++p << endl;
//cout << "Output of ++*p: " << ++*p << endl;
//cout << "Output of (*p)++: " << (*p)++ << endl;

cout << " " << endl;
cout << "Output of a= 'z': " << a << endl;
cout << "Output of b = &a: " << b << endl;
cout << "Output of c = &b: " << c << endl;

return 0;

}
