//. De shaw company interview question by love babbar
// leetcode 17 :- Phone Keypad Problem
// 17. Letter Combinations of a Phone Number
// Letter_Combinations_of_a_Phone_Number.cpp


class Solution {
public:
    void solve(string mapping[], string output, int index,
               vector<string>& ans, string digits) {

        // base case
        if (index >= digits.length()) {
            if (output.length() > 0)
                ans.push_back(output);
            return;
        }

        string temp = mapping[digits[index] - '0'];

        for (auto ch : temp) {
            output.push_back(ch);
            solve(mapping, output, index + 1, ans, digits);

            // backtracking
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        string mapping[] = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        string output = "";
        int index = 0;
        vector<string> ans;

        solve(mapping, output, index, ans, digits);
        return ans;
    }
};