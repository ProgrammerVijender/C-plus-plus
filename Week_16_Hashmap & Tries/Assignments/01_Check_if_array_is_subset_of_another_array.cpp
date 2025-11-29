// gfg problem :- Check_if_array_is_subset_of_another_array

class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        
        unordered_map <int,int> map;
        
        
        for( auto i:a)
        {
           map[i]++;
        }
        
        for(auto j:b)
        {
            if(map[j] == 0 )
            {
                return false;
            }
               map[j]--;        
        }
        
        return 1;
    }
};