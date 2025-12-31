// leetcode 1079 :- Letter Tile Possibilities   

int solve(vector<int>& freq) {
    int ans = 0;

    // hr ek dabbe me, A -> Z tk insert krne ka try krra hu
    for (int i = 0; i < 26; i++) {

        // character exist krta h ya nahi
        if (freq[i] != 0) {

            // ek ans nikal gya
            ans++;

            // freq update
            freq[i]--;

            // baki recursion sambhal lega
            int recursionKaAns = solve(freq);
            ans += recursionKaAns;

            // backtracking
            freq[i]++;
        }
    }
    return ans;
}

int numTilePossibilities(string tiles) {
    vector<int> freq(26, 0);

    // count frequency fo characters
    for (auto ch : tiles) {
        freq[ch - 'A']++;
    }

    int ans = solve(freq);
    return ans;
}