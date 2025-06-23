import java.util.*;

public class MaxProduct_Optimal {
    public static int maxProduct(int[] nums) {
        int maxProd = nums[0], minProd = nums[0], result = nums[0];

        for (int i = 1; i < nums.length; i++) {
            int current = nums[i];

            if (current < 0) {
                int temp = maxProd;
                maxProd = minProd;
                minProd = temp;
            }

            maxProd = Math.max(current, maxProd * current);
            minProd = Math.min(current, minProd * current);

            result = Math.max(result, maxProd);
        }

        return result;
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
