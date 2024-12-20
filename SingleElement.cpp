//Using XOR I can find the Single element in an array that consists of duplicates.
#include <iostream>
#include<vector>
using namespace std;
 int singleNumber(vector<int>& nums){
    int XOR=nums[0];
    for(int i=1;i<nums.size();i++){
        XOR=XOR^nums[i];
    }
    return XOR;
 }



int main() {
    vector<int>array={1,1,2,3,3};
    int result=singleNumber(array);
    cout<<result;
    return 0;
}