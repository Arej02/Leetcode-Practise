#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int i=0,l=0,r=0;
        int n=s.size();

        while(i<n){
            while(i<n && s[i]!=' '){
                s[r++]=s[i++];
            }
            if(l<r){
                reverse(s.begin()+l,s.begin()+r);
                s[r]=' ';
                r++;
                l=r;
            }
            i++;
        }
        return s.substr(0,r-1);
        
    }
};