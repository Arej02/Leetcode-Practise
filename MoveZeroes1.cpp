//Uses an extra array temp[] to store the value.
#include <iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
    vector<int>temp={};
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            temp.push_back(nums[i]);
        }
    }
    int nz=temp.size();
    for(int i=0;i<nz;i++){
        nums[i]=temp[i];
    }
    for(int i=nz;i<nums.size();i++){
        nums[i]=0;
    }

        
}

int main() {
    vector<int>array={0,1,3,12,0,0};
    moveZeroes(array);
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
  

    return 0;
}