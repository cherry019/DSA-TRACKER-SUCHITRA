import java.util.*;

public class TwoSum_Optimal {
    public static int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];
            if (map.containsKey(complement))
                return new int[]{map.get(complement), i};
            map.put(nums[i], i);
        }
        return new int[]{};
    }

    public static void main(String[] args) {
        int[][] tests = {
            {2, 7, 11, 15},
            {3, 2, 4},
            {3, 3},
            {1, 2, 3}
        };
        int[] targets = {9, 6, 6, 7};

        for (int i = 0; i < tests.length; i++) {
            int[] res = twoSum(tests[i], targets[i]);
            System.out.println(Arrays.toString(res));
        }
    }
}
