
// leetcode 76

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {

        int len1 = s.length();
        int len2 = t.length();

        // invalid case
        if (len1 < len2) {
            return "";
        }

        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        // store freq of pattern string
        for (char ch : t) {
            tMap[ch]++;
        }

        // initialise count variable, that basically shows count of actual
        // pattern wale string k character present in the current window
        int count = 0;

        int start = 0;
        int e = 0;

        int ansIndex = -1;
        int ansLen = INT_MAX;

        while (e < s.length()) {

            char ch = s[e];

            // update freq in sMap
            sMap[ch]++;

            if (sMap[ch] <= tMap[ch]) {
                // valid character
                count++;
            }

            if (count == len2) {
                // window found, jisme poora pattern exist krta h
                // -> minimise
                // minimise sirf usi case me karunga, jis case me
                // s index pr jo character present h, vo
                // ya toh extra hai ya fer faltu hai
                // aisa character jo pattern k andar hi nahi h, use bhi remove karo

                while (sMap[s[start]] > tMap[s[start]] || tMap[s[start]] == 0) {

                    if (sMap[s[start]] > tMap[s[start]]) {
                        sMap[s[start]]--;
                    }
                    start++;
                }

                // answer nikalo
                int windowLength = e - start + 1;
                if (windowLength < ansLen) {
                    ansLen = windowLength;
                    ansIndex = start;
                }
            }
            e++;
        }

        if (ansIndex == -1) {
            return "";
        }
        else {
            return s.substr(ansIndex, ansLen);
        }
    }
};
