#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProduct(vector<int>& nums) {
    int maxProd = nums[0], minProd = nums[0], result = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        int current = nums[i];
        
        if (current < 0) swap(maxProd, minProd);

        maxProd = max(current, maxProd * current);
        minProd = min(current, minProd * current);

        result = max(result, maxProd);
    }

    return result;
}

int main() {
    vector<vector<int>> tests = {
        {2, 3, -2, 4},
        {-2, 0, -1},
        {0, 2},
        {-2, 3, -4}
    };

    for (auto& test : tests) {
        cout << "Max Product: " << maxProduct(test) << endl;
    }
}
