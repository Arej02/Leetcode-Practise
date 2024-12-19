//Uses two for loops to find the maximum Sum of a Subarray.We can optimize this
//by using Kadane's algorithm
#include <iostream>
#include<vector>
#include<climits>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int Max=INT_MIN;
    for(int start=0;start<nums.size();start++){
        int sum=0;
        for(int end=start;end<nums.size();end++){
            sum+=nums[end];
            Max=max(sum,Max);
        }
    }
    return Max;       
}

int main() {
    vector<int>array={1,2,3,4,5};
    int sum=maxSubArray(array);
    cout<<sum;
    return 0;
}