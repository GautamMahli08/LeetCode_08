//Find Here Leetcode-Code As Well As cpp-Code

-------------------------------- Leetcode ----------------------------------

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int siz_e=nums.size();
        int lower=0;
        int mid;

        if(target>nums[siz_e-1]){
            return siz_e;
        }

        while(lower<=siz_e){
            mid=(lower+siz_e)/2;
            if(nums[mid]==target){
                return mid;
            }

            if(target<nums[mid]){
                siz_e=mid-1;
            }
            else {
                lower=mid+1;
            }
        }
        return lower;

    }
};


----------------------------------- cpp --------------------------------

#include <iostream>

using namespace std;

   int find_index(int arr[], int target,int n)
    {
        //cout<<"size = "<<n<<endl;
         int low=0;
        int mid;

        if(target>arr[n-1]){
            return n;
        }

        while(low<=n){
            mid=(low+n)/2;
            if(arr[mid]==target){
                return mid;
            }

            if(target<arr[mid]){
                n=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;


    }

int main()
{
   int arr[]={1,3,5,6,8,10,12,45};
    int n=sizeof(arr)/sizeof(arr[0]);
   int target=5;

    int value=find_index(arr,target,n);
   cout<<value;
    return 0;
}
