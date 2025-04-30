#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#include "../solutions/solution.cpp"

bool isEqual(const vector<int>& a, const vector<int>& b) {
    vector<int> a_sorted = a;
    vector<int> b_sorted = b;
    sort(a_sorted.begin(), a_sorted.end());
    sort(b_sorted.begin(), b_sorted.end());
    return a_sorted == b_sorted;
}

int main() {
    Solution sol;

    vector<pair<vector<int>, vector<int>>> testCases = {
        {{4, 3, 2, 7, 8, 2, 3, 1}, {5, 6}},
        {{1, 1}, {2}},
        {{1, 2, 3, 4, 5}, {}},
        {{2, 2, 2, 2, 2}, {1, 3, 4, 5}},
        {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {}},
        {{3, 3, 3, 1, 1, 1}, {2, 4, 5, 6}},
        {{1, 2, 4, 5, 6}, {3}},
        {{7, 8, 9, 10, 10, 8, 7, 6, 5, 5}, {1, 2, 3, 4}},
        {{2}, {1}},
        {{}, {}}
    };

    for (int i = 0; i < testCases.size(); ++i) {
        vector<int> output = sol.findDisappearedNumbers(testCases[i].first);
        bool passed = isEqual(output, testCases[i].second);
        cout << "Test Case " << (i + 1) << ": " << (passed ? "Passed" : "Failed") << endl;
    }

    
}
