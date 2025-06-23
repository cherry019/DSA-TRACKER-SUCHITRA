#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
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

void print(vector<int> arr) {
    for (int num : arr) cout << num << " ";
    cout << endl;
}

int main() {
    vector<vector<int>> tests = {
        {2,0,2,1,1,0},
        {2,0,1},
        {0},
        {1,2,0}
    };

    for (auto& test : tests) {
        sortColors(test);
        print(test);
    }
}
