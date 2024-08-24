#include<iostream>
using namespace std;

    void zeroone(int arr[] , int n)
    {
        int zero = 0;
        int one = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i]==0)
            {
                zero++;
            }
            
            if (arr[i]==1)
            {
                one++;
            }

        }

         int i;
         for (int i = 0; i < zero; i++)
         {
            arr[i]=0;
         }
            
        for(int j=i; j<n; j++)
        {
            arr[j]=1;
        }

    }

int main(){
    int arr[]={0,0,1,0,1,0,1,0,0,1,0,0,1};
    int n = 13;

    
    for (int i = 0; i < n; i++)
    {
        zeroone(arr,n);
        cout<<arr[i]<<" ";
    }

}


        // int index = 0;

        // while (zero--)
        // {
        //     arr[index]= 0;
        //     index++;
        // }
        
        // while (one--)
        // {
        //     arr[index]= 1;
        //     index++;
        // }