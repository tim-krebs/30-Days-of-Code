#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string N_temp;
    getline(cin, N_temp);

    int n = stoi(ltrim(rtrim(N_temp)));

    if(n % 2 != 0){
        std::cout << "Weird" << std::endl;
    } else if(n % 2 == 0 && n <= 5 && n >= 2){
        std::cout << "Not Weird" << std::endl;
    }else if(n % 2 == 0 && n <= 20 && n >= 6){
        std::cout << " Weird" << std::endl;
    }else if(n % 2 == 0 && n > 20){
        std::cout << "Not Weird" << std::endl;
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
