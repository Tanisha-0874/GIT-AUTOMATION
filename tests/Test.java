// import java.util.*;

// // Main class to run test cases
// public class Test {
//   public static void main(String[] args) {
//     Solution solution = new Solution();

//     // List of test cases
//     int[][] testCases = {
//         { 4, 3, 2, 7, 8, 2, 3, 1 }, // Expected Output: [5, 6]
//         { 1, 1 }, // Expected Output: [2]
//         { 1, 2, 3, 4, 5 }, // Expected Output: []
//         { 2, 2, 2, 2, 2 }, // Expected Output: [1, 3, 4, 5]
//         { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, // Expected Output: []
//         { 3, 3, 3, 1, 1, 1 }, // Expected Output: [2, 4, 5, 6]
//         { 1, 2, 4, 5, 6 }, // Expected Output: [3]
//         { 7, 8, 9, 10, 10, 8, 7, 6, 5, 5 }, // Expected Output: [1, 2, 3, 4]
//         { 2 }, // Expected Output: [1]
//         {} // Expected Output: []
//     };

//     // Running test cases
//     for (int i = 0; i < testCases.length; i++) {
//       List<Integer> result = solution.findDisappearedNumbers(testCases[i]);
//       System.out.println("Test Case " + (i + 1) + ": " + Arrays.toString(testCases[i]));
//       System.out.println("Missing Numbers: " + result);
//       System.out.println();
//     }
//   }
// }

import java.util.*;
import solutions.Solution;

public class Test {
  public static void main(String[] args) {
    Solution solution = new Solution();

    // List of test cases
    int[][] testCases = {
        { 4, 3, 2, 7, 8, 2, 3, 1 }, // Expected Output: [5, 6]
        { 1, 1 }, // Expected Output: [2]
        { 1, 2, 3, 4, 5 }, // Expected Output: []
        { 2, 2, 2, 2, 2 }, // Expected Output: [1, 3, 4, 5]
        { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, // Expected Output: []
        { 3, 3, 3, 1, 1, 1 }, // Expected Output: [2, 4, 5, 6]
        { 1, 2, 4, 5, 6 }, // Expected Output: [3]
        { 7, 8, 9, 10, 10, 8, 7, 6, 5, 5 }, // Expected Output: [1, 2, 3, 4]
        { 2 }, // Expected Output: [1]
        {} // Expected Output: []
    };

    // Running test cases
    for (int i = 0; i < testCases.length; i++) {
      List<Integer> result = solution.findDisappearedNumbers(testCases[i]);
      Collections.sort(result); // Ensure the missing numbers are in ascending order
      System.out.println("Test Case " + (i + 1) + ": " + Arrays.toString(testCases[i]));
      System.out.println("Missing Numbers: " + result);
      System.out.println("--------------------------------");
    }
  }
}
