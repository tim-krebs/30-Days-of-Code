#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    // My code


    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string name;
    long num;
    unordered_map<string, long> phoneBook;
    for (int i = 0; i < n; i++){
        cin >> name;
        cin >> num;
        phoneBook[name] = num;
    }

    while(cin >> name){
        if (phoneBook.count(name)){
            cout << name << "=" << phoneBook[name] << endl;
        }
        else {
            cout << "Not found" << endl;
        }
    }


    return EXIT_SUCCESS;
}
