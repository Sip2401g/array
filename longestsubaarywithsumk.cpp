#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, -1, 5, -2, 3};
    int k = 3;

    int n = arr.size();
    int maxLen = 0;

    // try all subarrays
    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (sum == k) {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }

    cout << "Longest subarray length = " << maxLen;

    return 0;
}