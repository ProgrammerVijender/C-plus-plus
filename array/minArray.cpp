#include<iostream>
using namespace std;

void print(int arr[] , int size)
{   
int a=0,b=0;
    for (int i = 0; i < size; i++)
    {
        if ( a == 0)
        {
            a++;
        }

        if ( b == 1)
        {
            b++;
        }
    }
    cout<<"0 are"<<a<<"1 are"<<b;
}
int main(){
    int arr[15] ={1,0,1,0,1,0,1,0,0,1,0,1,0,0,1};
    int size = 15;
    
    void print(arr,size);
return 0;
}