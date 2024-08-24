// #include <iostream>
// #include<limits.h>

// using namespace std;

//  int searcharray(int arr[] , int size, int index , int mini)
// {
//     //basecase 
//     if(index == size || index > size)
//     {   return;
//     }
    
//     //processing
//     mini = min(mini,arr[index]);

//     //recursive calls
//     searcharray(arr , size , index+1 , mini);

// }

// int main()
// {
//     int arr[] = {2,7,9,5,9,6,4,1,3};
//     int size = 9;
//     int index = 0;
//     int mini = INT_MAX;

//     int new_min = searcharray(arr , size , index , mini);

//     cout<<"minimum number is : " << new_min;

//     return 0;
// }

// #include <iostream>
// #include<limits.h>

// using namespace std;

//  int searcharray(int arr[] , int size, int index , int &mini)
// {
//     //basecase 
//     if(index >= size)
//     {   
//         return;
//     }

//     //processing
//     mini = min(mini,arr[index]);

//     //recursive calls
//     searcharray(arr , size , index+1 , mini);

// }

// int main()
// {
//     int arr[] = {2,7,9,5,9,6,4,1,3};
//     int size = 9;
//     int index = 0;
//     int mini = INT_MAX;

//      searcharray(arr , size , index , mini);

//     cout<<"minimum number is : " << mini;

//     return 0;
// }

#include <iostream>
#include <limits.h>

using namespace std;

void searcharray(int arr[], int size, int index, int &mini)
{
    // base case
    if (index >= size)
    {
        return;
    }

    // processing
    mini = min(mini, arr[index]);

    // recursive call
    searcharray(arr, size, index + 1, mini);
}

int main()
{
    int arr[] = {2, 7, 9, 5, 9, 6, 4, 1, 3};
    int size = 9;
    int index = 0;
    int mini = INT_MAX;

    // Call the searcharray function to find the minimum value
    searcharray(arr, size, index, mini);

    cout << "Minimum number is: " << mini;

    return 0;
}