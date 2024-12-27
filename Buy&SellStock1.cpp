#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;



int maxProfit(vector<int>& prices) {
    int lowestPrice=prices[0];
    int profit=0;
    for(int i=1;i<prices.size();i++){
        int cost=prices[i]-lowestPrice;
        profit=max(profit,cost);
        lowestPrice=min(lowestPrice,prices[i]);
    }
    return profit;
}

int main() {
    vector<int>array={7,6,4,3,1};
    int profit=maxProfit(array);
    cout<<profit;
    return 0;
}