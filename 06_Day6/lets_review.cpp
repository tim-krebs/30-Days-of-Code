#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int test_case;  // number of test cases 
    cin >> test_case;
    for(int i = 0; i < test_case; i++){ 
        string S;
        cin >> S;   // input the strings
        string even = "", odd = "";     // storage of seperation
        for (int j = 0; j < S.length(); j++){
            if (j % 2 == 0){    
                even += S[j];   // to append
            } else {
                odd += S[j];
            }
             }
            cout << even << " " << odd << endl; 
         
         }
    return 0;
}