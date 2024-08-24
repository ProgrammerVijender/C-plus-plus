#include<iostream>
using namespace std;
int main(){

    int i,linear=5,n=5 , arr[7]= {1,2,3,4,5};
    bool flag=0;

    for( i=0; i<n; i++ )
    {
        if(arr[i] == linear)
        {
            flag = 1;
            break;
        }

    }
     if(flag == 1)
        {
             cout<<"linear is exist : "<<linear;
        }
        
        else{
             cout<<"linear is not exist";
        }



    return 0;
}