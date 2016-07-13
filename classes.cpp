// classes example
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {return width*height;}
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
	
	int a, b;
	cout << "Enter width ";
	cin >> a; 
	cout << "Enter length ";
	cin >> b;
	
  Rectangle rect, rectb;	//two instances of class Rectangle
  rect.set_values (a,b);
  rectb.set_values (5,6);
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}
