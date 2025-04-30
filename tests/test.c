#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../solutions/solution.c"

bool arraysEqual(int* a, int sizeA, int* b, int sizeB) {
    if (sizeA != sizeB) return false;
    for (int i = 0; i < sizeA; i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int returnSize;
    bool allPassed = true;  // ✅ Declare and initialize

    int nums1[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int expected1[] = {5, 6};
    int* result1 = findDisappearedNumbers(nums1, 8, &returnSize);
    bool test1 = arraysEqual(result1, returnSize, expected1, 2);
    allPassed = allPassed && test1;
    printf("Test Case 1: %s\n", test1 ? "Passed" : "Failed");

    int nums2[] = {1, 1};
    int expected2[] = {2};
    int* result2 = findDisappearedNumbers(nums2, 2, &returnSize);
    bool test2 = arraysEqual(result2, returnSize, expected2, 1);
    allPassed = allPassed && test2;
    printf("Test Case 2: %s\n", test2 ? "Passed" : "Failed");

    int nums3[] = {1, 2, 3, 4, 5};
    int* result3 = findDisappearedNumbers(nums3, 5, &returnSize);
    bool test3 = (returnSize == 0);
    allPassed = allPassed && test3;
    printf("Test Case 3: %s\n", test3 ? "Passed" : "Failed");

    int nums4[] = {2, 2, 2, 2, 2};
    int expected4[] = {1, 3, 4, 5};
    int* result4 = findDisappearedNumbers(nums4, 5, &returnSize);
    bool test4 = arraysEqual(result4, returnSize, expected4, 4);
    allPassed = allPassed && test4;
    printf("Test Case 4: %s\n", test4 ? "Passed" : "Failed");

    int nums5[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* result5 = findDisappearedNumbers(nums5, 10, &returnSize);
    bool test5 = (returnSize == 0);
    allPassed = allPassed && test5;
    printf("Test Case 5: %s\n", test5 ? "Passed" : "Failed");

    int nums6[] = {3, 3, 3, 1, 1, 1};
    int expected6[] = {2, 4, 5, 6};
    int* result6 = findDisappearedNumbers(nums6, 6, &returnSize);
    bool test6 = arraysEqual(result6, returnSize, expected6, 4);
    allPassed = allPassed && test6;
    printf("Test Case 6: %s\n", test6 ? "Passed" : "Failed");

    int nums7[] = {1, 2, 4, 5, 6};
    int expected7[] = {3};
    int* result7 = findDisappearedNumbers(nums7, 5, &returnSize);
    bool test7 = arraysEqual(result7, returnSize, expected7, 1);
    allPassed = allPassed && test7;
    printf("Test Case 7: %s\n", test7 ? "Passed" : "Failed");

    int nums8[] = {7, 8, 9, 10, 10, 8, 7, 6, 5, 5};
    int expected8[] = {1, 2, 3, 4};
    int* result8 = findDisappearedNumbers(nums8, 10, &returnSize);
    bool test8 = arraysEqual(result8, returnSize, expected8, 4);
    allPassed = allPassed && test8;
    printf("Test Case 8: %s\n", test8 ? "Passed" : "Failed");

    int nums9[] = {2};
    int expected9[] = {1};
    int* result9 = findDisappearedNumbers(nums9, 1, &returnSize);
    bool test9 = arraysEqual(result9, returnSize, expected9, 1);
    allPassed = allPassed && test9;
    printf("Test Case 9: %s\n", test9 ? "Passed" : "Failed");

    int* nums10 = NULL;
    int* result10 = findDisappearedNumbers(nums10, 0, &returnSize);
    bool test10 = (returnSize == 0);
    allPassed = allPassed && test10;
    printf("Test Case 10: %s\n", test10 ? "Passed" : "Failed");

    return allPassed ? 0 : 1;  // ✅ Correctly reflect success/failure to GitHub Actions
}
