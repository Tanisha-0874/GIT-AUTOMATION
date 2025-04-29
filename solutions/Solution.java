package solutions;

import java.util.*;

public class Solution {
  public List<Integer> findDisappearedNumbers(int[] nums) {
int n = nums.length;
        boolean[] present = new boolean[n + 1];
        
        for (int num : nums) {
            present[num] = true;
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
