#include <iostream>
using namespace std;

// 1.heapify iteratively 
// 2.delete from heap
// 3. heapify recursively
// 4. build heap
// 5. HeapSort 
class Heap{

    public :
    int *arr;
    int capacity;
    int size;

    Heap(int capacity){

        this->arr = new int[capacity];

        // size = 
        this->size = 0;
    }

    void insert(int val){

        if(size == capacity)
        {
            cout<<"Heap is full : Heap Overflow "<<endl;
            return;
        }
        
        size++; // Increment the size after successful insertion
        int index = size;
        arr[index] = val; // Place the new value at the end
        
        while (index > 1) 
        {
            int parent = index / 2; // Calculate the parent index
            
            if(arr[index] > arr[parent])
            {
                swap(arr[index], arr[parent]); // Swap if the child is greater than the parent
                index = parent; // Move up to the parent's position
            }
            
            // parent = (index - 1) / 2; // Recalculate the parent index
            else{
                break;
            }
        }

    }

    void printHeap()
    {
        for(int i=1; i<=size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


    int deletefromHeap()
    {
        int answer = arr[1];


        // replacement 
        arr[1] = arr[size];
        
        // last element ko delete karnege uski original position se
        size--;
        
        int index = 1;
        while(index < size)
        {
            int leftIndex = 2 * index;
            int rightIndex = 2 * index + 1;
            
            // find out karna h , sabse bada kon h 
            int largestIndex = index;
            
            // checking left index
            if(leftIndex <= size && arr[leftIndex] > arr[largestIndex])
            {
                largestIndex = leftIndex;
            }
            
            // checking right index
            if(rightIndex <= size && arr[rightIndex] > arr[largestIndex])
            {
                largestIndex = rightIndex;
            }
            
            // if no change in index
            if (index == largestIndex)
            {
                break;

            }
            else
            {
                swap(arr[index], arr[largestIndex]);
                index = largestIndex;
            }
        }

        return answer;
    }
};

    // heapify using recursion
    void heapify(int *arr, int n,int index)
    {
        int left = 2 * index;
        int right = 2 * index +1;
        int largestValueIndex = index;


        // check teeno me se max konsa 
        if(left <=n && arr[left] > arr[largestValueIndex])
        {
            largestValueIndex = left;
        }
        if(right <=n && arr[right] > arr[largestValueIndex])
        {
            largestValueIndex = right;
        }

        // after these 3 conditions

        if(index != largestValueIndex)
        {
            swap(arr[index], arr[largestValueIndex]);
            index  = largestValueIndex;
            heapify(arr , n , index);   
        }
    }
        
    void buildheap(int arr[], int n)
    {   
        // not Process for leaf node
        for(int index = n/2; index>0; index--)
        {
            heapify(arr , n , index);
        }
    }

    // Heap Sort
    void heapSort(int arr[], int n)
    {
        while(n != 1)
        {
            swap(arr[1] , arr[n]);
            n--;
            heapify(arr, n , 1);
        }
    }

int main()
{
    // cout << "Hello, World!" << endl;

    Heap h(20);
    /*
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6);
    
    
    cout <<"Heap is  : ";
    h.printHeap();
    
    int ans = h.deletefromHeap();
    // deletefromHeap(h);
    
    cout<<"Answer is : "<<ans<<endl;
    
    
    
    cout <<"Heap is  : ";
    h.printHeap();
    */
    

    // heapsort checking
    int arr[]  = {-1, 5,10,15,20,25,12};
    int n = 6;

    buildheap(arr,6);
    cout << "printing heap : " << endl;

    for(int i=1; i<=6; i++)
    {
        cout<< arr[i] << " ";
    }

    cout<< endl;

    heapSort(arr,n);

    cout << "printing heap : " << endl;

    for(int i=1; i<=6; i++)
    {
        cout<< arr[i] << " ";
    }

    cout<< endl;

    return 0;
}

