#include<iostream>
using namespace std;

int hello(int dividend , int divisor)
{
    int s=0,e=dividend,ans;

    while(s<=e)
    {   int mid = s+(e-s)/2;
        cout<<"dividend  : "<<dividend<<"divisor  : "<<divisor<<"midd : "<<mid<<endl;
        if(mid * divisor == dividend)
        {
            return mid;
        }
        else if(mid * divisor < dividend)
        {   ans = mid;
            s=mid+1;
        }
        else
            e=mid-1;
        
    }
}
int main(){
    int dividend = 35;
    int divisor = 1;
    
    int n = hello(dividend,divisor);

    cout<<"n iss : "<<n;

    return 0;
}