Find here Leetcode-code As Well As cpp-code

------------------------Leetcode----------------------------------
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        for(int i=0; i<s.size(); i++) 
         {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                st.push(s[i]);


           else if(!st.empty())
           {
                char c=st.top();
                if(c=='(' && s[i]==')')
                      st.pop();
                else if(c=='[' && s[i]==']')
                      st.pop();
                else if(c=='{' && s[i]=='}')
                      st.pop();                
            }
            else
                return false;
        }  
        if(!st.empty())
            return false;
        return true;
}
};



--------------------------cpp-------------------------------------
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s ="(]";
    stack<char>st;

   if(s[0]==')'||s[0]==']'||s[0]=='}')
            return false;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                st.push(s[i]);

               else if(!st.empty())
              {
                char c=st.top();
                if(c=='(' && s[i]==')')
                      st.pop();
                else if(c=='[' && s[i]==']')
                      st.pop();
                else if(c=='{' && s[i]=='}')
                      st.pop();
            }
    else
        return false;
    }

    if(!st.empty())
        return false;
    return true;
}










