//Find here Leetcode-Code As Well As cpp-Code


----------------------------------- Leetcode ------------------------------------

    //Algorithm approach
    class Solution {
public:
     int mySqrt(int x) {
     int low=0;
     int high=x;
     int ans=0;
    

     while(low<=high) {

      long long int mid =(low+high)/2;

        long long int square=mid*mid;

         if(square==x){
             return mid;
         }

         else if(square < x){
             ans=mid; 
             low=mid+1;
         }

         else{
             high=mid-1;
         }
     }
     return ans;
    }
};


//Brute Approach

 class Solution {
public:
     int mySqrt(int x) {
    int square_root(int x)
    {
        int i=1;
        while(i*i<=x){
            i++;
        }
        return (i-1);
     }
   }
};



--------------------------- cpp --------------------------
//Algorithm Approach

    #include <iostream>

using namespace std;

int square_root(int x)
{
    int low=0;
    int high=x;
    int ans=0;

    while(low<=high){
        int mid=(low+high)/2;
        int square=mid*mid;

        if(square==x){
            return mid;
        }

        else if(square<x){
            ans=mid;
            low=mid+1;
        }

        else{
            high=mid-1;
        }
    }
    return ans;
}
int main()
{
    cout<<square_root(8);
    return 0;
}

 //Brute Approach
    
#include <iostream>

using namespace std;

    int square_root(int x)
    {
        int i=1;
        while(i*i<=x){
            i++;
        }
        return (i-1);


    }
int main()
{
   cout<<square_root(8);
    return 0;
}
