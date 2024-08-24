#include<iostream>
using namespace std;

void sumtarget(int arr[],int target)
{   int n;

    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i]+arr[j]==target)
            {
                cout<<i<<" "<<j;
            }
        }



    
    }
            // return ;


}


int main(){

    int arr[5]={2,7,11,15,46};
    int target=9;
    sumtarget(arr,target);

return 0;
}











// #include<iostream>
// using namespace std;

// void sumtarget(int arr[],int target)
// { 
//     for (int i = 0; i < sizeof(arr); i++)
//     {
//         for (int j = 0; j < sizeof(arr); j++)
//     {
//        if (arr[i]+arr[j]==target)

//     }
//     }

// }

// int main(){

//     int arr[5]={2,7,11,15,46};
//     int target=9;
//     sumtarget(arr,target);

// return 0;
// }