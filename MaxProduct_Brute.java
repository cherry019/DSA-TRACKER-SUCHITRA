import java.util.*;

public class MaxProduct_Brute {
    public static int maxProduct(int[] nums) {
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < nums.length; i++) {
            int prod = 1;
            for (int j = i; j < nums.length; j++) {
                prod *= nums[j];
                max = Math.max(max, prod);
            }
        }
        return max;
    }

    public static void main(String[] args) {
        int[][] tests = {
            {2, 3, -2, 4},
            {-2, 0, -1},
            {0, 2},
            {-2, 3, -4}
        };
        for (int[] test : tests) {
            System.out.println("Max Product: " + maxProduct(test));
        }
    }
}
