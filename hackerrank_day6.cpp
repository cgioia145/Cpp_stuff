#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    string first;
    string second;
    
    cin >> n;
    
    for (int i=0; i<n; i++){
        string S;
        cin >> S;
        
        int l= S.length();
        
        string scramble1;
        string scramble2;
        
        for (int m=0; m<l; m+=2;){
            scramble1 += S[m];
        }
        
        for (int m=1; m<l; m+=2;){
            scramble2 +=S[m];
        }
        
        cout << scramble1 << " " << scramble2 << endl;
        
    }
    
    return 0;
}
