#include <iostream>
#include <vector>
using namespace std;


int solveUsingRecursion(int capacity,int wt[],int profit[],int index,int n)
{
    // 1.base case

    if(index >= n)
    {
        return 0;
    }
    //2. Base Case (dono same hi kaam karrenge )

    // if(index == n-1)
    // {
    //     if(wt[index] <= capacity)
    //     {
    //         return profit[index];
    //     }
    //     else
    //     {
    //         return 0;
    //     }
    // }

    int include = 0;

    if(wt[index] <= capacity)
    {
        include = profit[index] + solveUsingRecursion(capacity - wt[index],wt,profit,index+1,n);
    }
    int exclude = solveUsingRecursion(capacity,wt,profit,index+1,n);

    int ans = max(include,exclude);

    return ans;
}

int solveUsingMemoisation(int capacity,int wt[],int profit[],int index,int n , vector<vector<int> > &dp)
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


    int include = 0;

    if(wt[index] <= capacity)
    {
        include = profit[index] + solveUsingMemoisation(capacity - wt[index],wt,profit,index+1,n,dp);
    }
    int exclude = solveUsingMemoisation(capacity,wt,profit,index+1,n,dp);

    dp[capacity][index] = max(include,exclude);

    return dp[capacity][index];
}


int solveUsingMemoisation2(int capacity,int wt[],int profit[],int index,int n , vector<vector<int> > &dp)
{
    // Base Case 

    if(index >= n)
    {
       return 0;
    }

    if(dp[index][capacity] != -1)
    {
        return dp[index][capacity];
    }


    int include = 0;

    if(wt[index] <= capacity)
    {
        include = profit[index] + solveUsingMemoisation2(capacity - wt[index],wt,profit,index+1,n,dp);
    }
    int exclude = solveUsingMemoisation2(capacity,wt,profit,index+1,n,dp);

    dp[index][capacity] = max(include,exclude);

    return dp[index][capacity];
}





int main()
{
    // Test Case 1 :- ans is 220 :- 
    // int capacity = 50;
    // int wt[] = {10, 20, 30};

    // int profit[]  = {60, 100, 120};
    // int index = 0;
    // int n = 3;

     // Test Case 2 :-  ans is 3 :- 
    // int capacity = 4;
    // int wt[] = {4,5,1};

    // int profit[]  = {1,2,3};
    // int index = 0;
    // int n = 3;

    // Test Case 3 :- ans is 65 :-
    int capacity = 6;
    int wt[] = {1 ,2, 3};

    int profit[]  = {10,15,40};
    int index = 0;
    int n = 3;

    // 1. using recursion
    // int ans = solveUsingRecursion(capacity,wt,profit,index,n);
    // cout<< "Max Profit : " <<  ans <<endl;

    // 2. using memoisation
    // vector < vector < int > > dp(capacity+1,vector<int>(n+1,-1));
    // 2.2
    vector<vector<int> > dp(n, vector<int>(capacity+1, -1));
    int ans = solveUsingMemoisation2(capacity,wt,profit,index,n,dp);
    cout<< "Max Profit : " <<  ans <<endl;




    // for(auto i : dp)
    // {
    //     for(auto j : i)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
        
    // }


    return 0;
}


// run by command paste in vscode terminal
/*

g++ -std=c++11 02_knapsack_problem.cpp -o 02_knapsack_problem
./02_knapsack_problem

*/