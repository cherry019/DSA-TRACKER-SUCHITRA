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
