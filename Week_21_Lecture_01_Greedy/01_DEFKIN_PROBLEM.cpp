// DEFKIN : DEFENCE OF A KINGDOM PROBLEM
// spoj.com  pr available h ye problem

#include <iostream>
#include <vector>

using namespace std;

int main(){

    // Grid size
    int row = 8;
    int col = 15;
    int tower = 3;

    cout << row << " " << col << " " << tower << endl;

    // Locations of towers (x, y)
    vector<pair<int, int>> loc;
    loc.push_back(make_pair(3, 8));
    loc.push_back(make_pair(11, 2));
    loc.push_back({8, 6});   // both insertion methods are valid

    /* ---------------- X Dimension ---------------- */

    vector<int> xDim;
    xDim.push_back(0);           // left boundary
    xDim.push_back(col + 1);     // right boundary

    for (int i = 0; i < loc.size(); i++) {
        xDim.push_back(loc[i].first);
    }

    sort(xDim.begin(), xDim.end());

    /* ---------------- Y Dimension ---------------- */

    vector<int> yDim;
    yDim.push_back(0);           // bottom boundary
    yDim.push_back(row + 1);     // top boundary

    for (int i = 0; i < loc.size(); i++) {
        yDim.push_back(loc[i].second);
    }

    sort(yDim.begin(), yDim.end());

    /* --------- Calculate gaps in X dimension --------- */

    vector<int> xAns;
    for (int i = 1; i < xDim.size(); i++) {
        int diff = xDim[i] - xDim[i - 1] - 1;
        xAns.push_back(diff);
    }

    /* --------- Gaps in Y direction --------- */

    vector<int> yAns;
    for (int i = 1; i < yDim.size(); i++) {
        int diff = yDim[i] - yDim[i - 1] - 1;
        yAns.push_back(diff);
    }

    /* --------- Maximum Area Calculation --------- */

    int maxi = -1;
    for (int i = 0; i < xAns.size(); i++) {
        for (int j = 0; j < yAns.size(); j++) {
            int prod = xAns[i] * yAns[j];
            maxi = max(maxi, prod);
        }
    }

    cout << "Final Ans: " << maxi << endl;

    return 0;
}