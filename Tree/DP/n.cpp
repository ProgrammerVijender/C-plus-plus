#include<iostream>
using namespace std;


int solveUsingMemoisation2(int capacity,int wt[],int profit[],int index,int n , vector<vector<int> > &dp)
{
    // Base Case 
    if(index >= n)
    {
        return 0;
    }

    if(dp[capacity][index] != -1)
    {
        return dp[capacity][index];
    }

    int inc = 0;
    int inc = dp[capacity][index] + solveUsingMemoisation2(capacity - wt[index] , wt , profit , index+1, n , dp);
    int exc = solveUsingMemoisation2(capacity - wt[index] , wt , profit , index+1, n , dp);


    int dp[capacity][index] = max(inc ,exc);
    return dp[capacity][index];
}

int solveUsingMemoisation22(int capacity,wt,int profit,int index,int n , vector<vector<int> > &dp)

int main()
{
    int capacity = 6;
    int wt[] = {1 ,2, 3};

    int profit[]  = {10,15,40};
    int index = 0;
    int n = 3;

    vector<vector<int> > dp(n, vector<int>(capacity+1, -1));
    int ans = solveUsingMemoisation22(capacity,wt,profit,index,n,dp);
    cout<< "Max Profit : " <<  ans <<endl;

    return 0;
}