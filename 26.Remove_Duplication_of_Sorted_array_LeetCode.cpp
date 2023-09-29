Find here Leetcode-Code As Well As cpp-Code

------------------------------- Leetcode -----------------------------------------    

 class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size_=nums.size();
        int Pre_initialize=1;

        for(int i=1 ; i<size_ ; i++)
        {
            if(nums[i]!=nums[Pre_initialize-1])
            {
                nums[Pre_initialize]=nums[i];
                Pre_initialize++;
            }
        }
        return Pre_initialize;
    }
};


-------------------------------- cpp ---------------------------------------------- 

                   ------  [ Using_Array ]  -------
    

#include <iostream>

using namespace std;

int Remove_dupli(int arr[],int size_)
{
    int res=1;
    for(int i=1 ; i<size_ ; i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int arr[]={10,20,30,40,50,50,60,60};
    int size_of=sizeof(arr)/sizeof(arr[0]);

   int n=Remove_dupli(arr,size_of);
   cout<<"Size of Removing Duplication = "<<n <<endl;
   for(int i=0 ; i<n ; i++){
    cout<<arr[i]<<"  ";
   }
    return 0;
}

                                     
                    ------ [ Using_Vector ] -------

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr={10,20,20,30,30,40,50,50};
    int size_=arr.size();
    int Pre_size=1;


    for(int i=0 ; i<size_ ; i++)
    {
        if(arr[i]!=arr[Pre_size-1])
        {
            arr[Pre_size]=arr[i];
            Pre_size++;
        }
    }
   cout<<"Size = "<<Pre_size;
    return 0;
}
