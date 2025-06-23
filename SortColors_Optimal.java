import java.util.Arrays;

public class SortColors_Optimal {
    public static void sortColors(int[] nums) {
        int low = 0, mid = 0, high = nums.length - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                int temp = nums[low];
                nums[low++] = nums[mid];
                nums[mid++] = temp;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                int temp = nums[mid];
                nums[mid] = nums[high];
                nums[high--] = temp;
            }
        }
    }

    public static void main(String[] args) {
        int[][] tests = {
            {2,0,2,1,1,0},
            {2,0,1},
            {0},
            {1,2,0}
        };

        for (int[] test : tests) {
            sortColors(test);
            System.out.println(Arrays.toString(test));
        }
    }
}
