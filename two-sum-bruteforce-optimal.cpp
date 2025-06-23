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





