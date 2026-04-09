#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    string result = "";

    for (int i = 0; i < strs[0].length(); i++) {
        char current = strs[0][i];

        for (int j = 1; j < strs.size(); j++) {
            // Check boundary or mismatch
            if (i >= strs[j].length() || strs[j][i] != current) {
                return result;
            }
        }

        result += current;
    }

    return result;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs);
    return 0;
}