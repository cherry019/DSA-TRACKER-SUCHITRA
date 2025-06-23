#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProduct(vector<int>& nums) {
    int maxProd = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        int prod = 1;
        for (int j = i; j < nums.size(); j++) {
            prod *= nums[j];
            maxProd = max(maxProd, prod);
        }
    }
    return maxProd;
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
