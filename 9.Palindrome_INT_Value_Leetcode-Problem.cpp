#include <iostream>

using namespace std;

bool Is_Pal(int x)
{
    if(x<0)
        return false;
    long n=x;
  //  long reverse=0;

        int lastdigit,revers;
        while(x>0){
        lastdigit =x%10;
        revers=(revers*10)+lastdigit;
        x/=10;
        }
    if(n==revers){
        return true;
    }
    else
        return false;

}
int main()
{
    cout<< "Is it Palindrome = " <<Is_Pal(121) << endl;
        cout<< "Is it Palindrome = " <<Is_Pal(-121) << endl;
        cout<< "Is it Palindrome = " <<Is_Pal(10) << endl;
    }
