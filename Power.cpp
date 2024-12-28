//Using binary exponential to calculate a power of a decimal number
#include <iostream>
using namespace std;
double myPow(double x, int n) {
        long binaryFormat=n;
        double ans=1;
        if(binaryFormat<0){
            x=1/x;
            binaryFormat=-binaryFormat;
        }

        while(binaryFormat>0){
            if(binaryFormat%2==1){
                ans*=x;
            }
            x*=x;
            binaryFormat/=2;
        }
        return ans;
}
