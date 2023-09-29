Find here LeetCode-Code As Well As cpp-Code

------------------------------ Leetcode ---------------------------------------------

class Solution {
public:
    string intToRoman(int num) {
        string Roman;
        vector<string>charc_value = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
        vector<int>int_value = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        for(int i=0 ; num>0 ; i++){
            while(num>=int_value[i]){
                Roman+=charc_value[i];
                num-=int_value[i];
            }
        }
        return Roman;
    }
};


-------------------------------- cpp ------------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

   string IntToRoman(int numb) {
   string roman ;
   vector<string>charc_value = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
   vector<int>int_value ={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
   for(int i=0 ; numb>0 ; i++) {
    while(numb>=int_value[i]){
        roman+=charc_value[i];
        numb-=int_value[i];
      }
   }
   return roman;
   }
int main()
{
    cout<<IntToRoman(2327);
        return 0;
}
