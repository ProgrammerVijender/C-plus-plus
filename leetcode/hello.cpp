#include<iostream>
using namespace std;

void hello(int arr[], int size)
{
    int a =0;
    int one = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            a++ ;
        }

        if (arr[i] == 1)
        {
            one++;
        }
    }
    
    cout<<"0s : "<<a<<"\n1s counts are : "<<one;
}
int main()
{
    int arr[13] = {0,1,0,1,0,1,0,1,0,1,0,0,0};
    int size = 13 ;
    hello(arr,size);

    return 0;
}