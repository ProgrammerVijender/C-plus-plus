1380. Lucky Numbers in a Matrix
Solved
Easy
Topics
Companies
Hint
Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order.

A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

 

Example 1:

Input: matrix = [[3,7,8],[9,11,13],[15,16,17]]
Output: [15]
Explanation: 15 is the only lucky number since it is the minimum in its row and the maximum in its column.
Example 2:

Input: matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]
Output: [12]
Explanation: 12 is the only lucky number since it is the minimum in its row and the maximum in its column.









class Solution {
public:
    std::vector<int> luckyNumbers(std::vector<std::vector<int>>& matrix) {
       int m = matrix.size();
      int n = matrix[0].size();
        std::vector<int> result;
        int s , t, z;
        for(int i=0; i<m; i++)
        {   int s = matrix[i][j];
            for(int j=0; j<n; j++)
            {
                if(s > matrix[i][j])
                {
                    s = matrix[i][j]
                }

            }
            for(int k=0; k<m; k++)
            {
                if(t < matrix[k][j])
                {
                    t = matrix[k][j] ;
                }

            }

            if(s == t){
                z= s;
            }
        }

        return z;
    }
};




// class Solution {
// public:
//     std::vector<int> luckyNumbers(std::vector<std::vector<int>>& matrix) {
//         std::vector<int> result;

//         // Iterate through each row
//         for (int i = 0; i < matrix.size(); ++i) {
//             // Find the minimum element in the current row
//             int min_in_row = *std::min_element(matrix[i].begin(), matrix[i].end());

//             // Find the column index of the minimum element
//             int min_col_index = std::distance(matrix[i].begin(), std::min_element(matrix[i].begin(), matrix[i].end()));

//             // Check if the minimum element is also the maximum in its column
//             if (std::all_of(matrix.begin(), matrix.end(), [&](const std::vector<int>& row) {
//                 return row[min_col_index] <= min_in_row;
//             })) {
//                 result.push_back(min_in_row);
//             }
//         }

//         return result;
//     }
// };