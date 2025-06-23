#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int count0 = 0, count1 = 0, count2 = 0;

    for (int num : nums) {
        if (num == 0) count0++;
        else if (num == 1) count1++;
        else count2++;
    }

    int i = 0;
    while (count0--) nums[i++] = 0;
    while (count1--) nums[i++] = 1;
    while (count2--) nums[i++] = 2;
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
