#include <iostream>
#include <unordered_map>
using namespace std;

    int RomanToInt(string s){
    unordered_map<char,int> my_map{
    {'I',1},
    {'V',5},
    {'X',10},
    {'L',50},
    {'C',100},
    {'D',500},
    {'M',1000},
    };
    int value=0;
    for(int i=0; i<s.size();i++){
        if(my_map[s[i]]<my_map[s[i+1]])
            value-=my_map[s[i]];
        else
            value+=my_map[s[i]];
      }
      return value;
    }
int main()
{
    cout<<RomanToInt("MMMDCCCLVI");
    return 0;
}
