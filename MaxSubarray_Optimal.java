public class MaxSubarray_Optimal {
    public static int maxSubArray(int[] nums) {
        int maxSoFar = nums[0], currentMax = nums[0];
        for (int i = 1; i < nums.length; i++) {
            currentMax = Math.max(nums[i], currentMax + nums[i]);
            maxSoFar = Math.max(maxSoFar, currentMax);
        }
        return maxSoFar;
    }

    public static void main(String[] args) {
        int[][] tests = {
            {-2,1,-3,4,-1,2,1,-5,4},
            {1},
            {5,4,-1,7,8},
            {-1,-2,-3,-4}
        };

        for (int[] test : tests) {
            System.out.println("Output: " + maxSubArray(test));
        }
    }
}
