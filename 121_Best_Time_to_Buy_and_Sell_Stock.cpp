// Find Here both Leetcode-Code As well as cpp-Code


--------------------------------- Leetcode ---------------------------------------

class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int min_price=prices[0];
      int max_profit=0;

            for(int i=1 ; i<prices.size() ; i++){
                max_profit=max(max_profit,prices[i]-min_price);
                min_price=min(prices[i],min_price);
            }  
            return max_profit;
    }
};


------------------------------------- cpp ---------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main()
{
      vector<int>price={7,1,5,3,6,4};
{
    int min_price=price[0];
    int max_profit=0;

        for(int i=1 ; i<price.size() ; i++){
            if(max_profit>price[i]-min_price){
                max_profit=max_profit;
            }
                else{
                 max_profit=price[i]-min_price;
            }

             if(price[i]<min_price){
                min_price=price[i];
             }
             else{
                min_price=min_price;
             }

        }
        cout<<max_profit;
    }
   return 0;
}
