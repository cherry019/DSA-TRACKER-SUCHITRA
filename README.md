# DSA-TRACKER-SUCHITRA
✅ Problem 1: Two Sum
### Problem Statement : Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to target.

📊 DSA Pattern
1.Brute Force: Nested Loops
2.Optimal: Hashing (using HashMap / unordered_map)

🧪 Test Cases : 
1.Input : [2,7,11,15]  Target : 9
Output : [0, 1]
2.Input : [3, 2, 4]  Target : 6
Output : [1, 2]




🚀 C++ Solutions:
  🔸 Brute Force Approach (C++): 
  #include <iostream>
using namespace std;

void twoSumBrute(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Indices: " << i << ", " << j << endl;
                return;
            }
        }
    }
    cout << "No solution found." << endl;
}

int main() {
    int testCases[3][4] = {{2,7,11,15}, {3,2,4,0}, {3,3,0,0}};
    int targets[3] = {9, 6, 6};
    for (int i = 0; i < 3; i++) {
        twoSumBrute(testCases[i], 4, targets[i]);
    }
}

⏳Complexity Analysis:
⏱️ Time Complexity: O(n^2)
💾 Space Complexity: O(1)


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

🔹 Optimal Approach (C++ - Hash Map)
#include <iostream>
#include <unordered_map>
using namespace std;

void twoSumOptimal(int arr[], int n, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++) {
        int comp = target - arr[i];
        if (map.find(comp) != map.end()) {
            cout << "Indices: " << map[comp] << ", " << i << endl;
            return;
        }
        map[arr[i]] = i;
    }
    cout << "No solution found." << endl;
}

int main() {
    int testCases[3][4] = {{2,7,11,15}, {3,2,4,0}, {3,3,0,0}};
    int targets[3] = {9, 6, 6};
    for (int i = 0; i < 3; i++) {
        twoSumOptimal(testCases[i], 4, targets[i]);
    }
}

⏳Complexity Analysis:
⏱️ Time Complexity: O(n)
💾 Space Complexity: O(n)


✅ Problem 2: Maximum Subarray (Kadane’s Algorithm)
### Problem Statement : Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

📊 DSA Pattern
1.Brute Force: All subarrays (prefix sum)
2.Optimal: Kadane’s Algorithm (Dynamic Programming)

🧪 Test Cases:
1.Input : [-2,1,-3,4,-1,2,1,-5,4]  
Output : 6
2.Input : [1]
Output : 1
3.Input: [5,4,-1,7,8] 
Output : 23

🚀 Java Solutions
🔸 Brute Force Approach (Java):
 public class MaxSubarrayBrute {
    public static int maxSubArray(int[] nums) {
        int maxSum = Integer.MIN_VALUE;
        for (int i = 0; i < nums.length; i++) {
            int sum = 0;
            for (int j = i; j < nums.length; j++) {
                sum += nums[j];
                maxSum = Math.max(maxSum, sum);
            }
        }
        return maxSum;
    }

  public static void main(String[] args) {
        int[][] testCases = {
            {-2,1,-3,4,-1,2,1,-5,4},
            {1},
            {5,4,-1,7,8}
        };
        for (int[] test : testCases) {
            System.out.println("Max Subarray Sum: " + maxSubArray(test));
        }
    }
}


🚀 C++ Solutions
🔸 Brute Force Approach (C++):
#include <iostream>
#include <climits>
using namespace std;

int maxSubArrayBrute(int arr[], int n) {
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

int main() {
    int arr1[] = {-2,1,-3,4,-1,2,1,-5,4};
    int arr2[] = {1};
    int arr3[] = {5,4,-1,7,8};

  cout << maxSubArrayBrute(arr1, 9) << endl;
  cout << maxSubArrayBrute(arr2, 1) << endl;
  cout << maxSubArrayBrute(arr3, 5) << endl;
}

⏳Complexity Analysis:
⏱️ Time Complexity: O(n²)
💾 Space Complexity: O(1)


🔹 Optimal Approach (Kadane's Algorithm - Java):
public class MaxSubarrayOptimal {
    public static int maxSubArray(int[] nums) {
        int maxSum = nums[0];
        int currSum = nums[0];
        for (int i = 1; i < nums.length; i++) {
            currSum = Math.max(nums[i], currSum + nums[i]);
            maxSum = Math.max(maxSum, currSum);
        }
        return maxSum;
    }

  public static void main(String[] args) {
        int[][] testCases = {
            {-2,1,-3,4,-1,2,1,-5,4},
            {1},
            {5,4,-1,7,8}
        };
        for (int[] test : testCases) {
            System.out.println("Max Subarray Sum: " + maxSubArray(test));
        }
    }
}


### 🔍 Code Explanation (Java Optimal)
1.Initialize currSum and maxSum to first element.

2.Traverse from index 1 onward.

3.Update currSum:

  --If continuing the previous subarray is better, add to currSum.

  --Else, start new subarray from current element.

 4.Track max with maxSum.   ###



🔹 Optimal Approach (Kadane’s Algorithm - C++):
#include <iostream>
#include <algorithm>
using namespace std;

int maxSubArrayOptimal(int arr[], int n) {
    int maxSum = arr[0];
    int currSum = arr[0];
    for (int i = 1; i < n; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main() {
    int arr1[] = {-2,1,-3,4,-1,2,1,-5,4};
    int arr2[] = {1};
    int arr3[] = {5,4,-1,7,8};

  cout << maxSubArrayOptimal(arr1, 9) << endl;
  cout << maxSubArrayOptimal(arr2, 1) << endl;
  cout << maxSubArrayOptimal(arr3, 5) << endl;
}


⏳Complexity Analysis:
⏱️ Time Complexity: O(n)
💾 Space Complexity: O(1)


✅ Problem 3: Sort 0s, 1s, and 2s (Dutch National Flag Problem)
### Problem Statement : Given an array consisting only of 0s, 1s, and 2s, sort the array in ascending order in-place without using any sorting function.

📊 DSA Pattern
1.Brute Force: Count sort (count and overwrite)
2.Optimal: Dutch National Flag Algorithm (3-pointer method)

🧪 Test Cases:
1.Input : [2,0,2,1,1,0]
Output : [0,0,1,1,2,2]
2.Input :[2,0,1]
Output : [0,1,2]

🚀 Java Solutions
🔸 Brute Force Approach (Java):
import java.util.Arrays;

public class SortColorsBrute {
    public static void sortColors(int[] nums) {
        int zero = 0, one = 0, two = 0;
        for (int num : nums) {
            if (num == 0) zero++;
            else if (num == 1) one++;
            else two++;
        }
        int i = 0;
        while (zero-- > 0) nums[i++] = 0;
        while (one-- > 0) nums[i++] = 1;
        while (two-- > 0) nums[i++] = 2;
    }

  public static void main(String[] args) {
        int[][] testCases = {
            {2, 0, 2, 1, 1, 0},
            {2, 0, 1},
            {0, 0, 1, 2, 2, 1, 0}
        };

  for (int[] test : testCases) {
            sortColors(test);
            System.out.println(Arrays.toString(test));
        }
    }
}


🚀 C++ Solutions
🔸 Brute Force Approach (C++):
#include <iostream>
#include <vector>
using namespace std;

void sortColorsBrute(vector<int>& nums) {
    int zero = 0, one = 0, two = 0;
    for (int num : nums) {
        if (num == 0) zero++;
        else if (num == 1) one++;
        else two++;
    }

  int index = 0;
  while (zero--) nums[index++] = 0;
  while (one--) nums[index++] = 1;
  while (two--) nums[index++] = 2;
}

void printArray(vector<int> nums) {
    for (int x : nums) cout << x << " ";
    cout << endl;
}

int main() {
    vector<vector<int>> testCases = {
        {2, 0, 2, 1, 1, 0},
        {2, 0, 1},
        {0, 0, 1, 2, 2, 1, 0}
    };

  for (auto& test : testCases) {
        sortColorsBrute(test);
        printArray(test);
    }
}

⏳Complexity Analysis:
⏱️ Time Complexity: O(n)
💾 Space Complexity: O(1)


🔹 Optimal Approach (Java – 3 Pointers):
import java.util.Arrays;

public class SortColorsOptimal {
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
        int[][] testCases = {
            {2, 0, 2, 1, 1, 0},
            {2, 0, 1},
            {0, 0, 1, 2, 2, 1, 0}
        };

  for (int[] test : testCases) {
            sortColors(test);
            System.out.println(Arrays.toString(test));
        }
    }
}


🔹 Optimal Approach (C++ – 3 Pointers):
#include <iostream>
#include <vector>
using namespace std;

void sortColorsOptimal(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;

  while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low++], nums[mid++]);
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high--]);
        }
    }
}

void printArray(vector<int> nums) {
    for (int x : nums) cout << x << " ";
    cout << endl;
}

int main() {
    vector<vector<int>> testCases = {
        {2, 0, 2, 1, 1, 0},
        {2, 0, 1},
        {0, 0, 1, 2, 2, 1, 0}
    };

  for (auto& test : testCases) {
        sortColorsOptimal(test);
        printArray(test);
    }
}

⏳Complexity Analysis:
⏱️ Time Complexity: O(n)
💾 Space Complexity: O(1)


✅ Problem 4: Move Zeroes to the End
###  Problem Statement : Given an array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

📊 DSA Pattern
1.Brute Force: Create a temp array, copy non-zero and then 0s
2.Optimal: Two-pointer approach (in-place swap)

🧪 Test Cases  :
Input :   [0,1,0,3,12]    Output :    [1,3,12,0,0]  
Input :  [1,0,2,0,0,3]    Output :    [1,2,3,0,0,0] 
Input  : [0,0,0,1]        Output  :   [1,0,0,0]     

🚀 Java Solutions
🔸 Brute Force Approach (Java):
import java.util.*;

public class MoveZeroesBrute {
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
        int[][] testCases = {
            {0, 1, 0, 3, 12},
            {1, 0, 2, 0, 0, 3},
            {0, 0, 0, 1}
        };

  for (int[] test : testCases) {
            moveZeroes(test);
            System.out.println(Arrays.toString(test));
        }
    }
}

🚀 C++ Solutions
🔸 Brute Force Approach (C++): 
#include <iostream>
#include <vector>
using namespace std;

void moveZeroesBrute(vector<int>& nums) {
    vector<int> temp(nums.size(), 0);
    int index = 0;

  for (int num : nums) {
        if (num != 0) temp[index++] = num;
    }

  for (int i = 0; i < nums.size(); i++) {
        nums[i] = temp[i];
    }
}

void printArray(vector<int> nums) {
    for (int x : nums) cout << x << " ";
    cout << endl;
}

int main() {
    vector<vector<int>> testCases = {
        {0, 1, 0, 3, 12},
        {1, 0, 2, 0, 0, 3},
        {0, 0, 0, 1}
    };

  for (auto& test : testCases) {
        moveZeroesBrute(test);
        printArray(test);
    }
}


⏳Complexity Analysis:
⏱️ Time Complexity: O(n)
💾 Space Complexity: O(n)


🔹 Optimal Approach (Java – Two Pointers):
import java.util.*;

public class MoveZeroesOptimal {
    public static void moveZeroes(int[] nums) {
        int lastNonZero = 0;

  for (int i = 0; i < nums.length; i++) {
            if (nums[i] != 0) {
                int temp = nums[i];
                nums[i] = nums[lastNonZero];
                nums[lastNonZero] = temp;
                lastNonZero++;
            }
        }
    }

  public static void main(String[] args) {
        int[][] testCases = {
            {0, 1, 0, 3, 12},
            {1, 0, 2, 0, 0, 3},
            {0, 0, 0, 1}
        };

  for (int[] test : testCases) {
            moveZeroes(test);
            System.out.println(Arrays.toString(test));
        }
    }
}

🔹 Optimal Approach (C++ – Two Pointers):
#include <iostream>
#include <vector>
using namespace std;

void moveZeroesOptimal(vector<int>& nums) {
    int lastNonZero = 0;

  for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[lastNonZero++], nums[i]);
        }
    }
}

void printArray(vector<int> nums) {
    for (int x : nums) cout << x << " ";
    cout << endl;
}

int main() {
    vector<vector<int>> testCases = {
        {0, 1, 0, 3, 12},
        {1, 0, 2, 0, 0, 3},
        {0, 0, 0, 1}
    };

  for (auto& test : testCases) {
        moveZeroesOptimal(test);
        printArray(test);
    }
}

⏳Complexity Analysis:
⏱️ Time Complexity: O(n)
💾 Space Complexity: O(1)

✅ Problem 5: Maximum Product Subarray
### Problem Statement : Given an integer array nums, find the subarray (contiguous elements) that has the maximum product, and return the product.

📊 DSA Pattern
1.Brute Force: Try all subarrays
2.Optimal: Modified Kadane’s Algorithm (track max/min product)


🧪 Test Cases

Input	: [2,3,-2,4]	           Output : 6
Input	: [-2,0,-1]	             Output : 0
Input	: [-2,3,-4]	             Output : 24
Input	: [0,2,-2,-3,0,4,-1]	   Output : 12


🚀 Java Solutions
🔸 Brute Force Approach (Java) : 
public class MaxProductBrute {
    public static int maxProduct(int[] nums) {
        int max = Integer.MIN_VALUE;

  for (int i = 0; i < nums.length; i++) {
            int product = 1;
            for (int j = i; j < nums.length; j++) {
                product *= nums[j];
                max = Math.max(max, product);
            }
        }
        return max;
    }

  public static void main(String[] args) {
        int[][] testCases = {
            {2, 3, -2, 4},
            {-2, 0, -1},
            {-2, 3, -4},
            {0, 2, -2, -3, 0, 4, -1}
        };

  for (int[] test : testCases) {
            System.out.println(maxProduct(test));
        }
    }
}

🚀 C++ Solutions
🔸 Brute Force Approach (C++)
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProductBrute(vector<int>& nums) {
    int maxProduct = INT_MIN;

  for (int i = 0; i < nums.size(); i++) {
        int product = 1;
        for (int j = i; j < nums.size(); j++) {
            product *= nums[j];
            maxProduct = max(maxProduct, product);
        }
    }

  return maxProduct;
}

int main() {
    vector<vector<int>> testCases = {
        {2, 3, -2, 4},
        {-2, 0, -1},
        {-2, 3, -4},
        {0, 2, -2, -3, 0, 4, -1}
    };

  for (auto& test : testCases) {
        cout << maxProductBrute(test) << endl;
    }
}

⏳Complexity Analysis:
⏱️ Time Complexity: O(n²)
💾 Space Complexity: O(1)


🔹 Optimal Approach (Java – Kadane's for Product):
public class MaxProductOptimal {
    public static int maxProduct(int[] nums) {
        int maxProd = nums[0], minProd = nums[0], result = nums[0];

  for (int i = 1; i < nums.length; i++) {
            int current = nums[i];

  if (current < 0) {
                int temp = maxProd;
                maxProd = minProd;
                minProd = temp;
            }

  maxProd = Math.max(current, current * maxProd);
            minProd = Math.min(current, current * minProd);

  result = Math.max(result, maxProd);
        }

  return result;
    }

  public static void main(String[] args) {
        int[][] testCases = {
            {2, 3, -2, 4},
            {-2, 0, -1},
            {-2, 3, -4},
            {0, 2, -2, -3, 0, 4, -1}
        };

  for (int[] test : testCases) {
            System.out.println(maxProduct(test));
        }
    }
}


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProductOptimal(vector<int>& nums) {
    int maxProd = nums[0], minProd = nums[0], result = nums[0];

  for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < 0) swap(maxProd, minProd);

  maxProd = max(nums[i], nums[i] * maxProd);
   minProd = min(nums[i], nums[i] * minProd);

  result = max(result, maxProd);
    }

  return result;
}

int main() {
    vector<vector<int>> testCases = {
        {2, 3, -2, 4},
        {-2, 0, -1},
        {-2, 3, -4},
        {0, 2, -2, -3, 0, 4, -1}
    };

  for (auto& test : testCases) {
        cout << maxProductOptimal(test) << endl;
    }
}

⏳Complexity Analysis:
⏱️ Time Complexity: O(n)
💾 Space Complexity: O(1)















