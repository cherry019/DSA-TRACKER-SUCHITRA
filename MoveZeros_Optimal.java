import java.util.Arrays;

public class MoveZeros_Optimal {
    public static void moveZeroes(int[] nums) {
        int nonZero = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != 0) {
                int temp = nums[i];
                nums[i] = nums[nonZero];
                nums[nonZero] = temp;
                nonZero++;
            }
        }
    }

    public static void main(String[] args) {
        int[][] tests = {
            {0,1,0,3,12},
            {0,0,1},
            {1,2,3},
            {0,0,0}
        };

        for (int[] test : tests) {
            moveZeroes(test);
            System.out.println(Arrays.toString(test));
        }
    }
}
