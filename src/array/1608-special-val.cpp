#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int specialArray(vector<int> &nums) {
        int n = nums.size();
        for (int i = 0; i <= n; ++i) {
            int cnt=0;
            for (int j = 0; j < n; ++j) {
                if (nums[j]>=i) cnt++;
            }
            if (cnt==i) return i;
        }
        return -1;
    }
};

int main() {

    return 0;
}