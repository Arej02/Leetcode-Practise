//Program to delete the duplicate in an array and return the number of unique elements
#include <iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int i=0;
    for(int j=i+1;j<nums.size();j++){
        if(nums[i]!=nums[j]){
            nums[i+1]=nums[j];
            i++;
        }
    }
    return i+1;
}

int main() {
    vector<int> array={1,1,2,3,4,5};
    int x=removeDuplicates(array);
    for(int i=0;i<x;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}