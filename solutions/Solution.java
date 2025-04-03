package solutions; // Ensure this matches your package structure

// import java.util.*; // Import necessary classes

// public class Solution {
// public List<Integer> findDisappearedNumbers(int[] nums) {
// return new ArrayList<>(); // Placeholder return statement
// }

import java.util.*;

public class Solution {
  public List<Integer> findDisappearedNumbers(int[] nums) {
    List<Integer> result = new ArrayList<>();

    // Mark numbers present in the array
    for (int i = 0; i < nums.length; i++) {
      int index = Math.abs(nums[i]) - 1; // Convert number to index (1-based to 0-based)
      if (nums[index] > 0) {
        nums[index] = -nums[index]; // Mark as visited by making it negative
      }
    }

    // Find missing numbers
    for (int i = 0; i < nums.length; i++) {
      if (nums[i] > 0) { // Positive index means the number (i+1) is missing
        result.add(i + 1);
      }
    }

    return result;
  }

  // Main method for testings//
  public static void main(String[] args) {
    Solution sol = new Solution();
    int[] nums = { 4, 3, 2, 7, 8, 2, 3, 1 };
    System.out.println(sol.findDisappearedNumbers(nums)); // Output: [5, 6]
  }
}
