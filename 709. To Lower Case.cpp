--------------------- LEETCODE -------------------

  class Solution {
public:
    string toLowerCase(string s) {
       transform(s.begin(), s.end(), s.begin(), ::tolower);
       return s;
    }
};


--------------------- CPP --------------------------

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s = "LOVELY HELLO";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s;
    return 0;

}
