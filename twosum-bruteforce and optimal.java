🚀 Java Solutions:
  🔸 Brute Force Approach (Java)

  public class TwoSumBrute {
    public static int[] twoSum(int[] nums, int target) {
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[i] + nums[j] == target) {
                    return new int[]{i, j};
                }
            }
        }
        return new int[]{}; // No solution
    }

  public static void main(String[] args) {
        int[][] testCases = {{2, 7, 11, 15}, {3, 2, 4}, {3, 3}};
        int[] targets = {9, 6, 6};

  for (int i = 0; i < testCases.length; i++) {
            int[] res = twoSum(testCases[i], targets[i]);
            System.out.println("Indices: " + res[0] + ", " + res[1]);
        }
    }
}




🔹 Optimal Approach (Java - HashMap)
import java.util.*;

public class TwoSumOptimal {
    public static int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int comp = target - nums[i];
            if (map.containsKey(comp)) {
                return new int[]{map.get(comp), i};
            }
            map.put(nums[i], i);
        }
        return new int[]{}; // No solution
    }

  public static void main(String[] args) {
        int[][] testCases = {{2, 7, 11, 15}, {3, 2, 4}, {3, 3}};
        int[] targets = {9, 6, 6};

  for (int i = 0; i < testCases.length; i++) {
            int[] res = twoSum(testCases[i], targets[i]);
            System.out.println("Indices: " + res[0] + ", " + res[1]);
        }
    }
}


