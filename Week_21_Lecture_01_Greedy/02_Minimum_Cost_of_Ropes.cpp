// Similar to Huffman coding

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>


using namespace std;


int solve(int arr[], int n) {

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Insert all elements into heap
    for (int i = 0; i < n; i++) {
        int val = arr[i];
        minHeap.push(val);
    }

    int cost = 0;

    // Combine elements until one element remains
    while (minHeap.size() > 1) {

        int a = minHeap.top();
        minHeap.pop();

        int b = minHeap.top();
        minHeap.pop();

        cost += a + b;

        int sum = a + b;
        minHeap.push(sum);
    }

    return cost;
}


int main() {

    int arr[] = {4, 3, 2, 6};
    int size = 4;

    int ans = solve(arr, size);

    cout << "Final Ans: " << ans << endl;

    return 0;
}