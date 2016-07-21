#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int remainder;
    cout << "Enter an integer to convert to binary: ";
    cin >> n;
    
    vector<int> myVector;
    
    //Convert to base-2
    while (n>0)
    {
        remainder = n%2;
        n= n/2;
        myVector.insert(myVector.begin(), remainder);
    }
    
    //Check for max consecutive 1's
    int checkMax = 0;
    vector<int> onesMax;
    int max = 0;
    
    
    for (unsigned int i=0; i < myVector.size(); i++)
    {
		
        if (myVector[i] == 1)
        {
            checkMax += 1;
            
            if (checkMax > max)
            max = checkMax;
		}
        else
        {
            checkMax = 0;
        }
    }
    
	cout << "Number of consecutive 1's: ";
    cout << max << endl;
        
    return 0;
}
