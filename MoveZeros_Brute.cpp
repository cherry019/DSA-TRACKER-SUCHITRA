#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    vector<int> temp(nums.size(), 0);
    int index = 0;
    for (int num : nums) {
        if (num != 0) temp[index++] = num;
    }
    nums = temp;
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
