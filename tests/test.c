#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../solutions/solution.c"

// Function to print arrays in the Python-style format
void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]");
}

// Function to compare two arrays
bool arraysEqual(int* a, int sizeA, int* b, int sizeB) {
    if (sizeA != sizeB) return false;
    for (int i = 0; i < sizeA; i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int returnSize;

    // Test Case 1
    int nums1[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int expected1[] = {5, 6};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int* result1 = findDisappearedNumbers(nums1, size1, &returnSize);
    printf("Test Case 1: Input: ");
    printArray(nums1, size1);
    printf("\nExpected Output: ");
    printArray(expected1, 2);
    printf(", Your Output: ");
    printArray(result1, returnSize);
    printf("\n%s\n\n", arraysEqual(result1, returnSize, expected1, 2) ? "✔ Passed" : "❌ Failed");

    // Test Case 2
    int nums2[] = {1, 1};
    int expected2[] = {2};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int* result2 = findDisappearedNumbers(nums2, size2, &returnSize);
    printf("Test Case 2: Input: ");
    printArray(nums2, size2);
    printf("\nExpected Output: ");
    printArray(expected2, 1);
    printf(", Your Output: ");
    printArray(result2, returnSize);
    printf("\n%s\n\n", arraysEqual(result2, returnSize, expected2, 1) ? "✔ Passed" : "❌ Failed");

    // Test Case 3
    int nums3[] = {1, 2, 3, 4, 5};
    int* expected3 = NULL;
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    int* result3 = findDisappearedNumbers(nums3, size3, &returnSize);
    printf("Test Case 3: Input: ");
    printArray(nums3, size3);
    printf("\nExpected Output: []");
    printf(", Your Output: ");
    printArray(result3, returnSize);
    printf("\n%s\n\n", arraysEqual(result3, returnSize, expected3, 0) ? "✔ Passed" : "❌ Failed");

    // Test Case 4
    int nums4[] = {2, 2, 2, 2, 2};
    int expected4[] = {1, 3, 4, 5};
    int size4 = sizeof(nums4) / sizeof(nums4[0]);
    int* result4 = findDisappearedNumbers(nums4, size4, &returnSize);
    printf("Test Case 4: Input: ");
    printArray(nums4, size4);
    printf("\nExpected Output: ");
    printArray(expected4, 4);
    printf(", Your Output: ");
    printArray(result4, returnSize);
    printf("\n%s\n\n", arraysEqual(result4, returnSize, expected4, 4) ? "✔ Passed" : "❌ Failed");

    // Test Case 5
    int nums5[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* expected5 = NULL;
    int size5 = sizeof(nums5) / sizeof(nums5[0]);
    int* result5 = findDisappearedNumbers(nums5, size5, &returnSize);
    printf("Test Case 5: Input: ");
    printArray(nums5, size5);
    printf("\nExpected Output: []");
    printf(", Your Output: ");
    printArray(result5, returnSize);
    printf("\n%s\n\n", arraysEqual(result5, returnSize, expected5, 0) ? "✔ Passed" : "❌ Failed");

    // Test Case 6
    int nums6[] = {3, 3, 3, 1, 1, 1};
    int expected6[] = {2, 4, 5, 6};
    int size6 = sizeof(nums6) / sizeof(nums6[0]);
    int* result6 = findDisappearedNumbers(nums6, size6, &returnSize);
    printf("Test Case 6: Input: ");
    printArray(nums6, size6);
    printf("\nExpected Output: ");
    printArray(expected6, 4);
    printf(", Your Output: ");
    printArray(result6, returnSize);
    printf("\n%s\n\n", arraysEqual(result6, returnSize, expected6, 4) ? "✔ Passed" : "❌ Failed");

    // Test Case 7
    int nums7[] = {1, 2, 4, 5, 6};
    int expected7[] = {3};
    int size7 = sizeof(nums7) / sizeof(nums7[0]);
    int* result7 = findDisappearedNumbers(nums7, size7, &returnSize);
    printf("Test Case 7: Input: ");
    printArray(nums7, size7);
    printf("\nExpected Output: ");
    printArray(expected7, 1);
    printf(", Your Output: ");
    printArray(result7, returnSize);
    printf("\n%s\n\n", arraysEqual(result7, returnSize, expected7, 1) ? "✔ Passed" : "❌ Failed");

    // Test Case 8
    int nums8[] = {7, 8, 9, 10, 10, 8, 7, 6, 5, 5};
    int expected8[] = {1, 2, 3, 4};
    int size8 = sizeof(nums8) / sizeof(nums8[0]);
    int* result8 = findDisappearedNumbers(nums8, size8, &returnSize);
    printf("Test Case 8: Input: ");
    printArray(nums8, size8);
    printf("\nExpected Output: ");
    printArray(expected8, 4);
    printf(", Your Output: ");
    printArray(result8, returnSize);
    printf("\n%s\n\n", arraysEqual(result8, returnSize, expected8, 4) ? "✔ Passed" : "❌ Failed");

    // Test Case 9
    int nums9[] = {2};
    int expected9[] = {1};
    int size9 = sizeof(nums9) / sizeof(nums9[0]);
    int* result9 = findDisappearedNumbers(nums9, size9, &returnSize);
    printf("Test Case 9: Input: ");
    printArray(nums9, size9);
    printf("\nExpected Output: ");
    printArray(expected9, 1);
    printf(", Your Output: ");
    printArray(result9, returnSize);
    printf("\n%s\n\n", arraysEqual(result9, returnSize, expected9, 1) ? "✔ Passed" : "❌ Failed");

    // Test Case 10
    int nums10[] = NULL;
    int* expected10 = NULL;
    int size10 = 0;
    int* result10 = findDisappearedNumbers(nums10, size10, &returnSize);
    printf("Test Case 10: Input: []\nExpected Output: []");
    printf(", Your Output: ");
    printArray(result10, returnSize);
    printf("\n%s\n\n", arraysEqual(result10, returnSize, expected10, 0) ? "✔ Passed" : "❌ Failed");

    return 0;
}
