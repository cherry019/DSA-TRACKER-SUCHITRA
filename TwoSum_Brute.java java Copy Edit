import java.util.Arrays;

public class TwoSum_Brute {
    public static int[] twoSum(int[] nums, int target) {
        for (int i = 0; i < nums.length; i++)
            for (int j = i + 1; j < nums.length; j++)
                if (nums[i] + nums[j] == target)
                    return new int[]{i, j};
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
