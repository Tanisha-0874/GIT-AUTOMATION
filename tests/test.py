import sys
import os

sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "solutions")))

from solution import Solution

def is_equal(list1, list2):
    return sorted(list1) == sorted(list2)

def run_tests():
    sol = Solution()
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

    all_passed = True

    for i, (nums, expected) in enumerate(test_cases, 1):
        result = sol.findDisappearedNumbers(nums)
        passed = is_equal(result, expected)
        print(f"Test Case {i}: {'Passed' if passed else 'Failed'}")
        if not passed:
            all_passed = False

    sys.exit(0 if all_passed else 1)

# Run the tests
run_tests()
