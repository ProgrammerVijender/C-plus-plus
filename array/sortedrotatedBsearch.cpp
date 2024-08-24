class Solution {
public:
    int PivotIndex(vector<int>& arr) {
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] > arr[e]) {
            s = mid + 1;
        } else if (arr[mid] < arr[e]) {
            e = mid; // You found a smaller element; set it as the new potential pivot
        } else {
            // Handle the case where arr[mid] == arr[e]
            e--; // Decrement e to eliminate duplicates
        }
    }
    return s;
}

    int binarysearch(vector<int>& arr, int s, int e, int target) {
        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (arr[mid] == target) {
                return mid;
            } else if (target > arr[mid]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& arr, int target) {
        int n = arr.size();
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[s] <= arr[mid]) {
            if (target >= arr[s] && target < arr[mid]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        } else {
            if (target > arr[mid] && target <= arr[e]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
    }

    return -1;
    }
}; 