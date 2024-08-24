#include<iostream>
#include<vector>
using namespace std;

    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        vector<vector<int>> result;
        // vector<int> v;

        int n = nums.size();
        int e = n-1;
        int e2 = n-2;
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<n/2; i++)
        {   vector<int> v(4,0);
            for(int j=i+1; j<n/2; j++)
            {
                cout<<" i: "<<i<<" j: "<<j<<endl;
                    v[0] = nums[i];
                    v[1] = nums[j];
                    v[2] = nums[e2];
                    v[3] = nums[e];
                }
                e2--;
            }

            cout<<endl;
                sort(v.begin(),v.end());
            result.push_back(v);
                e--;
            // e = n-1;
            // e2 = n-2;
        }

        return result;
    }


int main()
{
    int nums[] = {1,0,-1,0,-2,2}, target = 0;

    fourSum(nums, target);
    
    return 0;
}