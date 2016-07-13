// example: class constructor
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle ();
    Rectangle (int,int);
    int area () {return (width*height);}
};

// This is the constructor: (notice no return type)
Rectangle::Rectangle (int a, int b) { 
  width = a;
  height = b;
}

//Overloaded constructor
//i.e. multiple ways to call it based on input parameters
Rectangle::Rectangle () {
	width = 5;
	height = 5;
}

int main () {
  Rectangle rect (3,4);
  Rectangle rectb;
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}
