import sys
import os

sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "solutions")))

from solution import Solution

def is_equal(list1, list2):
    return sorted(list1) == sorted(list2)

# Function to run test cases
def run_tests():
    sol = Solution()

    # List of test cases
    test_cases = [
        ([4, 3, 2, 7, 8, 2, 3, 1], [5, 6]),
        ([1, 1], [2]),
        ([1, 2, 3, 4, 5], []),
        ([2, 2, 2, 2, 2], [1, 3, 4, 5]),
        ([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], []),
        ([3, 3, 3, 1, 1, 1], [2, 4, 5, 6]),
        ([1, 2, 4, 5, 6], [3]),
        ([7, 8, 9, 10, 10, 8, 7, 6, 5, 5], [1, 2, 3, 4]),
        ([2], [1]),
        ([], [])
    ]

    # Run test cases
    for i, (nums, expected) in enumerate(test_cases, 1):
        result = sol.findDisappearedNumbers(nums)
        status = "Passed" if is_equal(result, expected) else "Failed"
        print(f"Test Case {i}: {status}")

# Run all test cases
run_tests()
