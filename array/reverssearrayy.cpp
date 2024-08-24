#include<iostream>
using namespace std;

void input()
{   int n,temp;

    cout<<"enter n :";
    cin>>n;
    cout<<"enter ARRAYS :";

    int arr[n];
   for (int i = 0; i < n; i++)
   {
    cin>>arr[i];

   }

    int left = 0;
    int right= n-1;
    while (left < right)
    {
        temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;


        left++;
        right--;
    }
   cout<<"reversed array is :";
    for (int i = 0; i < n; i++)
   {
    cout<<arr[i]<<" ";

   }
    cout << endl;
}

int main()
{
    
    input();
    return 0;
}