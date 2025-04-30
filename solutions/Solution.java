package solutions;

import java.util.*;
 
public class Solution {
  public List<Integer> findDisappearedNumbers(int[] nums) {
int n = nums.length;
    boolean[] present = new boolean[n + 1];
    
    for (int i = 0; i < n; i++) {
        int val = nums[i];
        if (val >= 1 && val <= n) {
            present[val] = true;
        }
    }

    List<Integer> missingNumbers = new ArrayList<>();
    for (int i = 1; i <= n; i++) {
        if (!present[i]) {
            missingNumbers.add(i);
        }
    }

    return missingNumbers;

  }
}
