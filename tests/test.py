
import sys
import os
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "solutions")))
from solution import Solution
# Function to run test cases
def run_tests():
    sol = Solution()

    # List of test cases
    test_cases = [
        ([4, 3, 2, 7, 8, 2, 3, 1], [5, 6]),  # Test Case 1
        ([1, 1], [2]),                        # Test Case 2
        ([1, 2, 3, 4, 5], []),                # Test Case 3
        ([2, 2, 2, 2, 2], [1, 3, 4, 5]),      # Test Case 4
        ([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], []),# Test Case 5
        ([3, 3, 3, 1, 1, 1], [2, 4, 5, 6]),   # Test Case 6
        ([1, 2, 4, 5, 6], [3]),               # Test Case 7
        ([7, 8, 9, 10, 10, 8, 7, 6, 5, 5], [1, 2, 3, 4]),  # Test Case 8
        ([2], [1]),                           # Test Case 9
        ([], [])                              # Test Case 10
    ]

    # Run test cases
    for i, (nums, expected) in enumerate(test_cases, 1):
        result = sol.findDisappearedNumbers(nums)
        print(f"Test Case {i}: Input: {nums}")
        print(f"Expected Output: {expected}, Your Output: {result}")
        print("✔ Passed" if result == expected else "❌ Failed", "\n")

# Run all test cases
run_tests()
