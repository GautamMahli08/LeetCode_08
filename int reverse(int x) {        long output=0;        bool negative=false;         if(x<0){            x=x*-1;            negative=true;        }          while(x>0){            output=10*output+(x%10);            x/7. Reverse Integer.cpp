-------------------------- LEETCODE ----------------------------

  class Solution {
public:
    int reverse(int x) {
       long output=0;
       bool negative=false;

       if(x<0){
           x=x*-1;
           negative=true;
       } 

       while(x>0){
           output=10*output+(x%10);
           x/=10;
       }

       if(output>INT_MAX)
       return 0;

       if(negative==true) {
           return output*-1;
       }
       return output;
    }
};

----------------------------------- CPP -----------------------------------------

#include <iostream>

using namespace std;


 int reverse(int x) {
       long output=0;
       bool negative=false;

       if(x<0){
           x=x*-1;
           negative=true;
       }

       while(x>0){
           output=10*output+(x%10);
           x/=10;
       }

       if(output>INT_MAX)
       return 0;

       if(negative==true) {
           return output*-1;
       }
       return output;
    }

int main()
{
    cout <<reverse(-123);
    return 0;
}


  
