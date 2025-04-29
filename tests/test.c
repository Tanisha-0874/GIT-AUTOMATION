#include <stdio.h>
#include <stdlib.h>
#include "../solutions/solution.c"// Include your implementation file

// Function to print the array
void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    int returnSize;

    // Test Case 1
    int nums1[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int* result1 = findDisappearedNumbers(nums1, size1, &returnSize);
    printf("Test Case 1 Output: ");
    printArray(result1, returnSize);
    free(result1);

    // Test Case 2
    int nums2[] = {1, 1};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int* result2 = findDisappearedNumbers(nums2, size2, &returnSize);
    printf("Test Case 2 Output: ");
    printArray(result2, returnSize);
    free(result2);

    // Test Case 3 (All numbers missing except one)
    int nums3[] = {2, 2, 2, 2, 2};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    int* result3 = findDisappearedNumbers(nums3, size3, &returnSize);
    printf("Test Case 3 Output: ");
    printArray(result3, returnSize);
    free(result3);

    // Test Case 4 (No missing numbers)
    int nums4[] = {1, 2, 3, 4, 5};
    int size4 = sizeof(nums4) / sizeof(nums4[0]);
    int* result4 = findDisappearedNumbers(nums4, size4, &returnSize);
    printf("Test Case 4 Output: ");
    printArray(result4, returnSize);
    free(result4);

    // Test Case 5 (Single element - present)
    int nums5[] = {1};
    int size5 = sizeof(nums5) / sizeof(nums5[0]);
    int* result5 = findDisappearedNumbers(nums5, size5, &returnSize);
    printf("Test Case 5 Output: ");
    printArray(result5, returnSize);
    free(result5);

    // Test Case 6 (Single element - missing 1)
    int nums6[] = {2};
    int size6 = sizeof(nums6) / sizeof(nums6[0]);
    int* result6 = findDisappearedNumbers(nums6, size6, &returnSize);
    printf("Test Case 6 Output: ");
    printArray(result6, returnSize);
    free(result6);

    // Test Case 7 (Duplicates filling entire array)
    int nums7[] = {2, 2, 2, 2};
    int size7 = sizeof(nums7) / sizeof(nums7[0]);
    int* result7 = findDisappearedNumbers(nums7, size7, &returnSize);
    printf("Test Case 7 Output: ");
    printArray(result7, returnSize);
    free(result7);

    // Test Case 8 (Large input with one missing at start)
    int nums8[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size8 = sizeof(nums8) / sizeof(nums8[0]);
    int* result8 = findDisappearedNumbers(nums8, size8, &returnSize);
    printf("Test Case 8 Output: ");
    printArray(result8, returnSize);
    free(result8);

    // Test Case 9 (All elements the same and less than size)
    int nums9[] = {1, 1, 1, 1, 1};
    int size9 = sizeof(nums9) / sizeof(nums9[0]);
    int* result9 = findDisappearedNumbers(nums9, size9, &returnSize);
    printf("Test Case 9 Output: ");
    printArray(result9, returnSize);
    free(result9);

    // Test Case 10 (Reverse order with no missing)
    int nums10[] = {5, 4, 3, 2, 1};
    int size10 = sizeof(nums10) / sizeof(nums10[0]);
    int* result10 = findDisappearedNumbers(nums10, size10, &returnSize);
    printf("Test Case 10 Output: ");
    printArray(result10, returnSize);
    free(result10);

    return 0;
}
