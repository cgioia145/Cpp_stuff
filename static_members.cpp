// static members in classes
#include <iostream>
using namespace std;

class Dummy {
  public:
    static int n;
    Dummy () { n++; };
};

int Dummy::n=0;					//initializes n to be 0 (must be done outside class def)

int main () {
  Dummy a;						//sets static var n to be 0
  Dummy b[5];					//overwrites static n to be 5
  cout << a.n << '\n';			//increments n from a (which is now 5)-->6
  Dummy * c = new Dummy;
  cout << Dummy::n << '\n';		//increments n again using different syntax
  delete c;
  return 0;
}
