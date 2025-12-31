#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>


using namespace std;

int fractionalKnapsack(vector<int> val, vector<int> wt, int n, int capacity) {

    // value/weight ratio
    vector<float> valWtRatio;
    for (int i = 0; i < n; i++) {
        float ratio = (val[i] * 1.0) / wt[i];
        valWtRatio.push_back(ratio);
    }

    // Max heap: {ratio, {value, weight}}
    priority_queue<pair<float, pair<int, int>>> maxi;
    for (int i = 0; i < n; i++) {
        maxi.push({valWtRatio[i], {val[i], wt[i]}});
    }

    // 🔹 Your added code starts here
    int totalVal = 0;

    while (capacity != 0 && !maxi.empty()) {

        auto front = maxi.top();

        float ratio = front.first;
        int value = front.second.first;
        int weight = front.second.second;

        maxi.pop();

        // Full insert hoga
        if (capacity >= weight) {
            totalVal += value;
            capacity = capacity - weight;
        }
        else {
            // Fractional insert hoga
            int valueToInclude = ratio * capacity;
            totalVal += valueToInclude;
            capacity = 0;
            break;
        }
    }

    return totalVal;
}


int main() {

    vector<int> val = {60, 100, 120};
    vector<int> wt  = {10, 20, 30};

    int n = 3;
    int W = 50;

    int ans = fractionalKnapsack(val, wt, n, W);

    cout << "Final Ans: " << ans << endl;

    return 0;
}