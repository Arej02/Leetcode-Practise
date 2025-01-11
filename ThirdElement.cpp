#include<iostream>
#include<vector>
#include<set>
using namespace std;


class Solution {
public:
    int thirdMax(vector<int>& nums) {
         set<int> distinct;

        for (int num : nums) {
            distinct.insert(num);
            if (distinct.size() > 3) {
                distinct.erase(distinct.begin());
            }
        }
        if (distinct.size() < 3) {
            return *distinct.rbegin(); 
        }
        return *distinct.begin();
        

        
    }
};