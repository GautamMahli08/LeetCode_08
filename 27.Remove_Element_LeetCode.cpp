//Find here Leetcode-code As Well As cpp-Code


-------------------------------------- Leetcode ---------------------------------------
    
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int container = 0;

        for(int i =0 ; i<nums.size() ; i++)
        {
            if(nums[i]!=val)
            {
                nums[container]=nums[i];
                container++;
            }
        }
        return container;
    }
};

------------------------------------ cpp ----------------------------------------------
    
#include <iostream>

using namespace std;

    Remove_element(int arr[], int size_ , int val_)
    {
        int index=0;
        for(int i=0 ; i<size_ ; i++)
        {
           if (arr[i]!=val_)
           {
            arr[index]=arr[i];
            index++;
           }
        }
          return index;
    }



int main (){

    int arr[]={2,3,4,5,3,5,6,3,8};
    int siz_e=sizeof(arr)/sizeof(arr[0]);
    int val=3;


    int Value=Remove_element(arr, siz_e,val);
     cout<<"New_Size = "<<Value<<endl;

    for(int i=0 ; i<Value ; i++)
    {
        cout<<arr[i]<<" ";
    }

}
