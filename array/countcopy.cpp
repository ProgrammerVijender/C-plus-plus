#include<iostream>
#include<limits.h>
using namespace std;


    void printArray(int arr[], int size)
    {   int min = INT_MAX;
        
        for (int i = 0; i < size; i++)
        {
            if (min>arr[i])
            {
                min=arr[i];
            }
        }

         cout<<"min :"<<min ;
    }


        int main(){
        
        int arr[15]={1,9,2,2,9,9,2,9,2,9,9,9,2,9,2};
        int size = 15;

        printArray(arr,size);

      return 0;
        }


