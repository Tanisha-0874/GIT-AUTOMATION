class Solution(object):
    def findDisappearedNumbers(self, nums):
         num_set = set(nums)
        n = len(nums)
        result = []
        
        # Check for missing numbers in range [1, n]
        for i in range(1, n + 1):
            if i not in num_set:
                result.append(i)
        
        return result
