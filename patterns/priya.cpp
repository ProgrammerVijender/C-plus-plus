#include<iostream>
using namespace std;
int main()
{
//what is the sum of an array from 1 to n

    int a[5]={1,2,3,4,5};
    int sum=0;
    // for(int i=0;i<5;i++)
    // {
    //    sum = sum + a[i];
    // }

        for(int v:a){
            sum=sum+v;
        }

        
    
        

    cout<<sum << endl;
    return 0;
}