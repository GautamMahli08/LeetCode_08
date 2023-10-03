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
