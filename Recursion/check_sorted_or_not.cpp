#include <iostream>
using namespace std;

bool checksorted(int arr[] , int size , int index)
{
    //base case
    if (index >= size)
    {
        return true;
    }

    //processing
    if (arr[index] > arr[index - 1])
    {
        return checksorted( arr ,size ,index+1);
    }
    
    else
    {
        return false;
    }

}

int main()
{   int arr[] = {10,20,30,40,40,60};
    int size = 6;
    int index = 1;

    bool isSorted = checksorted( arr ,size ,index);

    if (isSorted == true)
    {
    cout << endl<< "Array is Sorted ";
    }
    
    else{
    cout << endl << "Array is not Sorted  ";
    }


    return 0;
}