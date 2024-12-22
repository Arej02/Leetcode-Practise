//Add one to the array
#include <iostream>
#include<vector>
using namespace std;
vector<int> plusOne(vector<int>& digits){
    int n=digits.size();
    for(int i=n-1;i>=0;i--){
        if(digits[i]==9){
            digits[i]=0;
        }else {
            digits[i]+=1;
            return digits;
        }
    }
    digits.push_back(0);
    digits[0]=1;
    return digits;
}



int main() {
    vector<int>array={9};
    plusOne(array);
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    return 0;
}