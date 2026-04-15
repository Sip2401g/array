#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 0, 2, 0, 4, 0, 5};

    int j = 0; // pointer for placing non-zero elements

    // Traverse the array
    for (int i = 0; i < arr.size(); i++) {

        // If current element is non-zero
        if (arr[i] != 0) {
            // Swap it with element at index j
            swap(arr[i], arr[j]);

            // Move j to next position
            j++;
        }
    }

    // Print the updated array
    cout << "Array after moving zeros to end: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
