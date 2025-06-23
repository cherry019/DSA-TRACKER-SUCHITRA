#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN;
    for (int i = 0; i < nums.size(); ++i) {
        int sum = 0;
        for (int j = i; j < nums.size(); ++j) {
            sum += nums[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

int main() {
    vector<vector<int>> tests = {
        {-2,1,-3,4,-1,2,1,-5,4},
        {1},
        {5,4,-1,7,8},
        {-1,-2,-3,-4}
    };

    for (auto& test : tests) {
        cout << "Output: " << maxSubArray(test) << endl;
    }
}
