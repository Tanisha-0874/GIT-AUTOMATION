#include <iostream>
#include <vector>

using namespace std;

#include "../solutions/solution.cpp"

void printVector(const vector<int>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i < vec.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

// Main function to test the Solution class
int main() {
    Solution sol;

    // Test Case 1: Given example
    vector<int> nums1 = {4, 3, 2, 7, 8, 2, 3, 1};
    cout << "Test Case 1 Output: ";
    printVector(sol.findDisappearedNumbers(nums1)); // Expected: [5,6]

    // Test Case 2: Another given example
    vector<int> nums2 = {1, 1};
    cout << "Test Case 2 Output: ";
    printVector(sol.findDisappearedNumbers(nums2)); // Expected: [2]

    // Test Case 3: No missing numbers
    vector<int> nums3 = {1, 2, 3, 4, 5};
    cout << "Test Case 3 Output: ";
    printVector(sol.findDisappearedNumbers(nums3)); // Expected: []

    // Test Case 4: All numbers missing except one
    vector<int> nums4 = {2, 2, 2, 2, 2};
    cout << "Test Case 4 Output: ";
    printVector(sol.findDisappearedNumbers(nums4)); // Expected: [1, 3, 4, 5]

    // Test Case 5: Already sorted and complete
    vector<int> nums5 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Test Case 5 Output: ";
    printVector(sol.findDisappearedNumbers(nums5)); // Expected: []

    // Test Case 6: Some missing numbers
    vector<int> nums6 = {3, 3, 3, 1, 1, 1};
    cout << "Test Case 6 Output: ";
    printVector(sol.findDisappearedNumbers(nums6)); // Expected: [2, 4, 5, 6]

    // Test Case 7: Single element missing
    vector<int> nums7 = {1, 2, 4, 5, 6};
    cout << "Test Case 7 Output: ";
    printVector(sol.findDisappearedNumbers(nums7)); // Expected: [3]

    // Test Case 8: Large input, missing multiple numbers
    vector<int> nums8 = {7, 8, 9, 10, 10, 8, 7, 6, 5, 5};
    cout << "Test Case 8 Output: ";
    printVector(sol.findDisappearedNumbers(nums8)); // Expected: [1, 2, 3, 4]

    // Test Case 9: Only one number in the list
    vector<int> nums9 = {2};
    cout << "Test Case 9 Output: ";
    printVector(sol.findDisappearedNumbers(nums9)); // Expected: [1]

    // Test Case 10: Empty array
    vector<int> nums10 = {};
    cout << "Test Case 10 Output: ";
    printVector(sol.findDisappearedNumbers(nums10)); // Expected: []

    return 0;
}
