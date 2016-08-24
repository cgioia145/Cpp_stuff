#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {   
    
    string name;
    long num;
    int N;
    cin >> N;
    cin.ignore();
    
    map <string, long> pBook;
        
    //Assemble dictionary/map
    for (int i=0; i<N; i++){
        cin >> name >> num;
        pBook[name]= num;
    }

    //Check entered names against dictionary/map
    while(cin >> name) {
        if (pBook.find(name) != pBook.end()) {
            cout << name << "=" << pBook.find(name)->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}
