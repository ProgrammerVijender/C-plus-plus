#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int count = 0;
        int size = nums.size();

        for(int i=0;  i < size; i++)
        {   cout<<" i: "<<i<<endl;
            for(int j=0;  j < nums.size(); j++)
            {
                // for(int k=0;  k < nums.size(); k++)
                // {
                // }
                    cout<<"  j: "<<j;
                    count++;
            }
            cout<<endl;
            if (i == size-1)
            {
                size--;
                i=0;
            }
        }

    return 0;
    }
}