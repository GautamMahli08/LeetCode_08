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
