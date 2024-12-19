#include <iostream>
#include<vector>
#include<climits>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int Max=INT_MIN;
    int sum=0;
    for(int start=0;start<nums.size();start++){
        sum+=nums[start];
        Max=max(sum,Max);
    }
    return Max;       
}

int main() {
    vector<int>array={1,2,3,4,5};
    int sum=maxSubArray(array);
    cout<<sum;
    return 0;
}