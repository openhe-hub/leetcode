#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool canTransform(string start, string end) {
        int n = start.size();
        int i = 0, j = 0;
        while (i < n || j < n) {
            while (i < n && start[i] == 'X') i++;
            while (j < n && end[j] == 'X') j++;
            if (i == n || j == n) return i == j;
            if (start[i] != end[j]) return false;
            if (start[i] == 'L' && i < j) return false;
            if (start[i] == 'R' && i > j) return false;
            i++;
            j++;
        }
        return true;
    }
};

int main() {
    string start = "RXXLRXRXL";
    string end = "XRLXXRRLX";
    Solution solution;
    cout << solution.canTransform(start, end) << endl;
    return 0;
}