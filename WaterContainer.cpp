//Using 2 pointers to find the height of maximum container
#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int>& height) {
    int maxArea=0;
    int start=0;
    int end=height.size()-1;
    while (start<end){
        int width=end-start;
        int h=min(height[start],height[end]);
        int area=width*h;
        maxArea=max(maxArea,area);
        height[start]<height[end]?start++:end--;
    }
    return maxArea;
        
}

int main() {
    vector<int>array={1,8,6,2,5,4,8,3,7};
    int result=maxArea(array);
    cout<<result;
    return 0;
}