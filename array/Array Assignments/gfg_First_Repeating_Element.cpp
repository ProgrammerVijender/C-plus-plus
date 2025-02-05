/*
class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(vector<int> &arr) {
        // code here
        
        
        unordered_map <int, int> map;
        
        for(auto i:arr)
        {
            map[i]++;
        }
        
        for(int i=0; i<arr.size(); i++)
        {
            if (map[arr[i]] > 1) {
                return i + 1; // Returning 1-based index
            }
        }
        
        return -1;
    }
};
*/