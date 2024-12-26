#include<iostream>
#include<vector>

using namespace std;

void rotate(vector<int>& nums, int k) {
    int n=nums.size()-1;
    k=k%nums.size();
    vector<int>temp;
    if (k==0) return;
    for(int i=nums.size()-k;i<nums.size();i++){
        temp.push_back(nums[i]);
    }
    for(int i=n;i>=k;i--){
        nums[i]=nums[i-k];
    }
    for(int i=0;i<k;i++){
        nums[i]=temp[i];
    }
       
}