#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int nonZero = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[nonZero]);
            nonZero++;
        }
    }
}

int main() {
    vector<vector<int>> tests = {
        {0,1,0,3,12},
        {0,0,1},
        {1,2,3},
        {0,0,0}
    };

    for (auto& test : tests) {
        moveZeroes(test);
        for (int num : test) cout << num << " ";
        cout << endl;
    }
}
