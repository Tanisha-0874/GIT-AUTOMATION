#include <stdio.h>
#include <stdlib.h>
#include "../solutions/solution.c";
// Function to find disappeared numbers


// Function to print the array
void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

// Main function to test the findDisappearedNumbers function
int main() {
    int returnSize;
    
    // Test Case 1
    int nums1[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int* result1 = findDisappearedNumbers(nums1, size1, &returnSize);
    printf("Test Case 1 Output: ");
    printArray(result1, returnSize);
    free(result1); // Free allocated memory

    // Test Case 2
    int nums2[] = {1, 1};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int* result2 = findDisappearedNumbers(nums2, size2, &returnSize);
    printf("Test Case 2 Output: ");
    printArray(result2, returnSize);
    free(result2);

    // Test Case 3 (All numbers missing)
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

    return 0;
}
