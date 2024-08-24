#include <iostream>
using namespace std;
void print(int arr[], int size , int index)
{
    //base case
    if(index >= size)
    {
        return;
    }

    //processing
    cout << arr[index] << " ";

    //recursive call
    print( arr,  size ,  index+1);
 
}
int main()
{
    int arr[] = {10,20,30,40,50};
    int size =5,index = 0;

    print( arr,size, index);

    return 0;
}

// REVERSE COUNTING 

// #include <iostream>
// using namespace std;
// void print(int arr[], int size , int index)
// {
//     //base case
//     if(index >= size)
//     {
//         return;
//     }

//     //processing
//     print( arr,  size ,  index+1);

//     //recursive call
//     cout << arr[index] << " ";
 
// }
// int main()
// {
//     int arr[] = {10,20,30,40,50};
//     int size =5,index = 0;

//     print( arr,size, index);

//     return 0;
// }