#include<iostream>
#include<vector>
using namespace std;

bool rowSearch(vector<vector<int>>& matrix, int target,int rowNumber,int cols){
        int start=0;
        int end=cols-1;

        while(start<=end){
            int mid=(start+end)/2;
            if (matrix[rowNumber][mid]==target) return true;
            else if (matrix[rowNumber][mid]<target) start=mid+1;
            else end=mid-1;
        }
        return false;

    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int start=0,end=row-1;
        int n=matrix[0].size();

        while(start<=end){
            int mid=(start+end)/2;
            if(target>=matrix[mid][0]&& target<=matrix[mid][n-1]){
                return rowSearch(matrix,target,mid,n);
            }else if(target>matrix[mid][n-1]){
                start=mid+1;
            }else end=mid-1;
        }
        return false;
        
    }