#include <stdio.h>
#include <stdlib.h>

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
  for (int i = 0; i < numsSize; i++) {
    int index = abs(nums[i]) - 1; // Convert value to index
    if (nums[index] > 0) {
        nums[index] = -nums[index]; // Mark as visited
    }
}

// Step 2: Collect missing numbers
int* result = (int*)malloc(numsSize * sizeof(int)); // Allocate maximum possible size
*returnSize = 0;

for (int i = 0; i < numsSize; i++) {
    if (nums[i] > 0) { // If the number at index i is still positive, (i+1) is missing
        result[(*returnSize)++] = i + 1;
    }
}

return result;
    
}
