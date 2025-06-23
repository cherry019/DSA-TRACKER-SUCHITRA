import java.util.Arrays;

public class MoveZeros_Brute {
    public static void moveZeroes(int[] nums) {
        int[] temp = new int[nums.length];
        int index = 0;
        for (int num : nums) {
            if (num != 0) temp[index++] = num;
        }
        for (int i = 0; i < nums.length; i++) {
            nums[i] = temp[i];
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
