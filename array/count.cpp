#include<iostream>
using namespace std;


    void printArray(int arr[], int size)
    {   int a=0,b=0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == 1)
            {
                a++;
            }
            if (arr[i] == 0)
            {
                b++;
            }
        }

        cout<<"1s are :"<<a<<endl<<"0s are :" << b ;
    }


        int main(){
        
        int arr[15]={0,0,1,1,0,0,1,0,1,0,0,0,1,0,1};
        int size = 15;

        printArray(arr,size);

      return 0;
        }


