//Using Moore's algoithm to find the majority element.
#include <iostream>
#include<vector>
using namespace std;

 int majorityElement(vector<int>& nums) {
        int majorityElement=0;
        int frequency=0;
        for(int i=0;i<nums.size();i++){
            if(frequency==0){
                majorityElement=nums[i];
                frequency=1;
            }else if(nums[i]==majorityElement) frequency++;
            else frequency --;
        }
        return majorityElement;

}

int main(){
    vector<int>array={1,3,1,2,1};
    int result=majorityElement(array);
    cout<<result;
    return 0;
}