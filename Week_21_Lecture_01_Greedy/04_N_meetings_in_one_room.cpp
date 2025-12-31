// gfg problems : - n meetings in one room


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int minMeetings(int st[], int end[], int n) {

    vector<pair<int, int>> time;

    // Store start & end times
    for (int i = 0; i < n; i++) {
        time.push_back({st[i], end[i]});
    }

    // Sort by end time
    sort(time.begin(), time.end(), cmp);

    int count = 1;
    int prevEnd = time[0].second;

    for (int i = 1; i < n; i++) {
        int currStart = time[i].first;

        // ✅ FIXED CONDITION
        if (currStart >= prevEnd) {
            count++;
            prevEnd = time[i].second;
        }
    }

    return count;
}


int main() {
    int st[]  = {1, 3, 0, 5, 8, 5};
    int end[] = {2, 4, 6, 7, 9, 9};
    int n = 6;

    int ans = minMeetings(st, end, n);

    cout << "Final Ans: " << ans << endl;

    return 0;
}
