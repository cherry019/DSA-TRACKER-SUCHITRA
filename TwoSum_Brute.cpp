#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i)
        for (int j = i + 1; j < nums.size(); ++j)
            if (nums[i] + nums[j] == target)
                return {i, j};
    return {};
}

int main() {
    vector<vector<int>> tests = {
        {2, 7, 11, 15},
        {3, 2, 4},
        {3, 3},
        {1, 2, 3}
    };
    vector<int> targets = {9, 6, 6, 7};

    for (int i = 0; i < tests.size(); ++i) {
        vector<int> res = twoSum(tests[i], targets[i]);
        for (int idx : res) cout << idx << " ";
        cout << endl;
    }
}
