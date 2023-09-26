#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> a={"flower", "flow", "fly"}; {

    int count=0;
    string str;
    string min_=*min_element(a.begin(),a.end());
    int length=min_.size();

    for(int i=0 ; i<a.size() ; i++){
        int len=a[i].length();
        if(len<length)
            length=len;
         str=a[i];
    }


    for(int i=0 ; i<length ; i++){
        for(int j=0 ; j<a.size() ; j++){
            if(a[j][i]!=str[i])
            cout<<str.substr(0,count);
        }
        count++;
     str.substr(0,count);
            }
}

    return 0;
}
