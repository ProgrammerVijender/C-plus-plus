// Dp is based on 2 things :-    1. Overlapping Subproblem   2. Optimal Substructure

// Dp  :-  1. Top Down Approach ---> Recursion + memoization
//         2. Bottom-up Approach ---> Tabulation method
//         3. Patterns    --->  space optimisation


//  1. Top Down Approach ---> Recursion + memoization

//  Steps for this :-  1. create a DP array      
//                     2. store/return ans in dp array 
//                     3. if ans already stored in Dp array then return


// leetcode problem no. 509  :- Fibonacci Number

// Using topdown approach :-
/*

    int solveUsingMemoisation(int n, vector <int> &dp)
    {
        // base case 

        if(n == 0 || n == 1)
        {
            return n;
        }

        //step 3:- if ans already exist then return ans;
        if(dp[n] != -1)
        {
            return dp[n];
        }

        // rec relation
        // step 2:-  store and return using dp array 
        dp[n] = solveUsingMemoisation(n-1, dp) + solveUsingMemoisation(n-2, dp);
        return dp[n];
    }

    int fib(int n )
    {
        // Step 1:- create dp array 
        vector <int> dp(n+1, -1);

        int ans = solveUsingMemoisation(n, dp);
        return ans;

    }

*/



// Same  fibonacci problem using Tabulation method :-

// Step 1:- create Dp array 
// Step 2:- 


/*

//tabulation method
    int solveUsingTabulation(int n) {
        //step1: create dp array
        vector<int> dp(n+1, -1);

        //step2: analyse base case and fill dp array
        dp[0] = 0;

    // dp[1] = 1; initialization baadme kiya kyoki if n==0 hoga tb vector 1 index ko access nhi kr skta 
        if(n == 0) {
            return 0;
        }
        dp[1] = 1;
        //step3: fill the remaingin dp array
        //array size = n+1
        //index move from 0 to n
        //0 and 1 index ko already fill krlia h
        //2 index se n index tak abhi filled nahi h
        for(int index = 2; index<=n; index++) {
            //copy paste karo recursive logic ko
            //repalce recursive calls  with dp array
            //make sure dp array is using looping variable
            dp[index] = dp[index-1] + dp[index-2];
        }
        //return ans;
        return dp[n];
    }

*/

/* recursive call bchaake solve krdiyaa */

/* vector ka space bchaake solve karenge using dp :- Solved using Tabulation & space Optimized */

//solve leetcode problem no. 509  :- Fibonacci Number

