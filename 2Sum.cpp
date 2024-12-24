//Using 2 pointer.Can optimize to O(n) using unoredered map.
#include <iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    int sum=0;
    int j=nums.size()-1;
    int i=0;
    while(i<j){
        sum=nums[i]+nums[j];
        if(sum>target){
            j--;
        }
        else{
            i++;
        }
        if(sum==target){
            return {i,j};
        }
    }
    return{};
        
}

int main() {
    
   vector<int>array={2,7,11,15};
   vector<int> result=twoSum(array,9);
   if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
       
   } else {
        cout << "No solution found." << endl;
    }
   

    return 0;
}