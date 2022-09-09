#include <bits/stdc++.h>
#define N 1005
using namespace std;

class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int size=startTime.size();
        int res=0;
        int diff[N];
        for (int i = 0; i < N; ++i) {
            diff[i]=0;
        }
        for (int i = 0; i < size; ++i) {
            int begin=startTime[i];
            int end=endTime[i];
            diff[begin]++;
            diff[end+1]--;
        }
        for (int i = 0; i < queryTime; ++i) {
            res+=diff[i+1];
        }
        return res;
    }
};