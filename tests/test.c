#include <stdio.h>
#include <stdlib.h>
#include "../solutions/solution.c"

void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]");
}

int main() {
    int returnSize;

    // Test Case 1
    int nums1[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int* result1 = findDisappearedNumbers(nums1, size1, &returnSize);
    printf("Test Case 1: Input: ");
    printArray(nums1, size1);
    printf("\nExpected Output: [5, 6], Your Output: ");
    printArray(result1, returnSize);
    printf("\n");

    // Test Case 2
    int nums2[] = {1, 1};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int* result2 = findDisappearedNumbers(nums2, size2, &returnSize);
    printf("Test Case 2: Input: ");
    printArray(nums2, size2);
    printf("\nExpected Output: [2], Your Output: ");
    printArray(result2, returnSize);
    printf("\n");

    // Test Case 3
    int nums3[] = {1, 2, 3, 4, 5};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    int* result3 = findDisappearedNumbers(nums3, size3, &returnSize);
    printf("Test Case 3: Input: ");
    printArray(nums3, size3);
    printf("\nExpected Output: [], Your Output: ");
    printArray(result3, returnSize);
    printf("\n");

    // Test Case 4
    int nums4[] = {2, 2, 2, 2, 2};
    int size4 = sizeof(nums4) / sizeof(nums4[0]);
    int* result4 = findDisappearedNumbers(nums4, size4, &returnSize);
    printf("Test Case 4: Input: ");
    printArray(nums4, size4);
    printf("\nExpected Output: [1, 3, 4, 5], Your Output: ");
    printArray(result4, returnSize);
    printf("\n");

    // Test Case 5
    int nums5[] = {1};
    int size5 = sizeof(nums5) / sizeof(nums5[0]);
    int* result5 = findDisappearedNumbers(nums5, size5, &returnSize);
    printf("Test Case 5: Input: ");
    printArray(nums5, size5);
    printf("\nExpected Output: [], Your Output: ");
    printArray(result5, returnSize);
    printf("\n");

    // Test Case 6
    int nums6[] = {2};
    int size6 = sizeof(nums6) / sizeof(nums6[0]);
    int* result6 = findDisappearedNumbers(nums6, size6, &returnSize);
    printf("Test Case 6: Input: ");
    printArray(nums6, size6);
    printf("\nExpected Output: [1], Your Output: ");
    printArray(result6, returnSize);
    printf("\n");

    // Test Case 7
    int nums7[] = {2, 2, 2, 2};
    int size7 = sizeof(nums7) / sizeof(nums7[0]);
    int* result7 = findDisappearedNumbers(nums7, size7, &returnSize);
    printf("Test Case 7: Input: ");
    printArray(nums7, size7);
    printf("\nExpected Output: [1, 3, 4], Your Output: ");
    printArray(result7, returnSize);
    printf("\n");

    // Test Case 8
    int nums8[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size8 = sizeof(nums8) / sizeof(nums8[0]);
    int* result8 = findDisappearedNumbers(nums8, size8, &returnSize);
    printf("Test Case 8: Input: ");
    printArray(nums8, size8);
    printf("\nExpected Output: [1], Your Output: ");
    printArray(result8, returnSize);
    printf("\n");

    // Test Case 9
    int nums9[] = {1, 1, 1, 1, 1};
    int size9 = sizeof(nums9) / sizeof(nums9[0]);
    int* result9 = findDisappearedNumbers(nums9, size9, &returnSize);
    printf("Test Case 9: Input: ");
    printArray(nums9, size9);
    printf("\nExpected Output: [2, 3, 4, 5], Your Output: ");
    printArray(result9, returnSize);
    printf("\n");

    // Test Case 10
    int nums10[] = {5, 4, 3, 2, 1};
    int size10 = sizeof(nums10) / sizeof(nums10[0]);
    int* result10 = findDisappearedNumbers(nums10, size10, &returnSize);
    printf("Test Case 10: Input: ");
    printArray(nums10, size10);
    printf("\nExpected Output: [], Your Output: ");
    printArray(result10, returnSize);
    printf("\n");

    return 0;
}
