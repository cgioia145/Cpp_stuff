//Linked list tutorial from Paul Programming on Youtube
#include <iostream>
#include <cstdlib>

#include "List.cpp"

using namespace std;

int main(){
	
	List Paul;
	
	Paul.AddNode(3);
	Paul.AddNode(5);
	Paul.AddNode(7);
	Paul.PrintList();
	
	Paul.DeleteNode(3);
	Paul.PrintList();
	
	return 0;
}
