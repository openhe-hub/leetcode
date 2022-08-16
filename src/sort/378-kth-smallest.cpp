#include <bits/stdc++.h>
using namespace std;

struct Data {
    int data;
    int x;
    int y;
};

bool operator<(Data d1, Data d2) {
    return d1.data>d2.data;
}


class Solution {
   public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        // init
        priority_queue<Data> pq;
        int n = matrix.size(), cnt = 0;
        for (int i = 0; i < n; i++) {
            pq.push({matrix[i][0], i, 0});
        }
        while ((++cnt) < k) {
            Data top = pq.top();
            pq.pop();
            if (top.y < n - 1)
                pq.push({matrix[top.x][top.y + 1], top.x, top.y + 1});
        }
        return pq.top().data;
    }
};

int main(int argc, char const* argv[]) {
    Solution so;
    int k=8;
    vector<vector<int>> vec = {{1, 5, 9}, {10, 11, 13}, {12, 13, 15}};
    cout << so.kthSmallest(vec, k) << endl;
    return 0;
}