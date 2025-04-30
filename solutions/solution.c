int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int temp;

    for (int index = 0; index < numsSize; ++index) {
        temp = abs(nums[index]) - 1;
        if (temp >= 0 && temp < numsSize)
            nums[temp] = -abs(nums[temp]);
    }

    int* result = (int*)malloc(numsSize * sizeof(int));
    int insert_index = 0;

    for (int index = 0; index < numsSize; ++index) {
        if (nums[index] > 0)
            result[insert_index++] = index + 1;
    }

    *returnSize = insert_index;
    return result;
    
 
}
