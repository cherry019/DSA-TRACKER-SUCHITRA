#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSoFar = nums[0], currentMax = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        currentMax = max(nums[i], currentMax + nums[i]);
        maxSoFar = max(maxSoFar, currentMax);
    }
    return maxSoFar;
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
