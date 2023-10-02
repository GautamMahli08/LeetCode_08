//Find Here Leetcode-Code As Well As cpp-Code


--------------------------------- Leetcode -----------------------------

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=s.size();
        int xox=0;
        int countt=0;

        for(int i=length-1 ; i>=0 ; i--)
        {
            if(s[i]==' ' && xox){
                break;
            }

            if(s[i]!=' '){
                xox=1;
                countt++;
            }
        }
        return countt;
    }
};

    
--------------------------------- cpp ----------------------------------
    

#include <iostream>

using namespace std;

int find_length(string sent, int n )
{
    int countt=0;
    int flag=0;

    for(int i=n-1 ; i>0; i--){

           if(sent[i]==' ' &&flag)                              //0 && 0 then break until its conditional get false;
                break;                                        //one it get false it jump into another if case;

           if(sent[i]!=' ')                     //it run until it conditional is true and once it get false then return the value;
           {
               flag=1;
               countt++;
           }

    }

        return countt;
}
int main()
{
    string word=" hello a  ";
    int length=word.size();

    cout<<"Length = "<<length<<endl;
    int coount =find_length(word,length);
    cout<<coount;
    return 0;
}
