package tests;

import solutions.Solution;
import java.util.*;

public class Test {

  // Utility function to check if two lists are equal
  public static boolean isEqual(List<Integer> a, List<Integer> b) {
    Collections.sort(a);
    Collections.sort(b);
    return a.equals(b);
  }

  public static void main(String[] args) {
    Solution sol = new Solution();

    // Define test cases as pairs of input and expected output
    List<Pair<int[], List<Integer>>> testCases = Arrays.asList(
        new Pair<>(new int[] { 4, 3, 2, 7, 8, 2, 3, 1 }, Arrays.asList(5, 6)),
        new Pair<>(new int[] { 1, 1 }, Arrays.asList(2)),
        new Pair<>(new int[] { 1, 2, 3, 4, 5 }, new ArrayList<>()),
        new Pair<>(new int[] { 2, 2, 2, 2, 2 }, Arrays.asList(1, 3, 4, 5)),
        new Pair<>(new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, new ArrayList<>()),
        new Pair<>(new int[] { 3, 3, 3, 1, 1, 1 }, Arrays.asList(2, 4, 5, 6)),
        new Pair<>(new int[] { 1, 2, 4, 5, 6 }, Arrays.asList(3)),
        new Pair<>(new int[] { 7, 8, 9, 10, 10, 8, 7, 6, 5, 5 }, Arrays.asList(1, 2, 3, 4)),
        new Pair<>(new int[] { 2 }, Arrays.asList(1)),
        new Pair<>(new int[] {}, new ArrayList<>()));

    // Test each case and print the result
    for (int i = 0; i < testCases.size(); ++i) {
      List<Integer> output = sol.findDisappearedNumbers(testCases.get(i).getKey());
      boolean passed = isEqual(output, testCases.get(i).getValue());
      System.out.println("Test Case " + (i + 1) + ": " + (passed ? "Passed" : "Failed"));
    }
  }
}

// Utility class for pairing input with expected output
class Pair<K, V> {
  private K key;
  private V value;

  public Pair(K key, V value) {
    this.key = key;
    this.value = value;
  }

  public K getKey() {
    return key;
  }

  public V getValue() {
    return value;
  }
}
