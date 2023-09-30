//Find Here Leetcode-Code As Well As cpp-Code

------------------------------ Leetcode ----------------------------------

class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0 ; i<haystack.size() ; i++)
        {
            for(int j=0 ; j<needle.size() ; j++){
                if(haystack[i+j]!=needle[j])
                    {
                        break;
                    }

                if(j==(needle.size()-1))
                    {
                        return i;
                    }    
            }
        }
        return -1;
    }
};


--------------------------------- cpp ------------------------------------    

    
#include <iostream>
#include <string>
using namespace std;

int check_string(string haystack, string needle)
{

    for(int i=0 ;i<haystack.size() ; i++)
    {
        for(int j=0 ; j<needle.size() ; j++)
        {
            if(haystack[i+j]!=needle[j]){
            break;
            }


            if(j==(needle.size()-1)){
                return i; }
        }
    }
    return -1;
}

int main()
{
    string sh="leetcode";
    string ch="leeto";

    int value = check_string(sh,ch);
    cout<<"Found at index = "<<value;
    return 0;
}
