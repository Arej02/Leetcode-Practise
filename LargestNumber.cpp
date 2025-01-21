#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        auto myLambda=[](int a,int b){
            string S1=to_string(a);
            string S2=to_string(b);
            return (S1+S2>S2+S1);
        };

        sort(nums.begin(),nums.end(),myLambda);
         if(nums[0]==0){
            return "0";
        }
        string letter="";
        for(int i=0;i<nums.size();i++){
            letter+=to_string(nums[i]);
        }
        return letter;

    }
};