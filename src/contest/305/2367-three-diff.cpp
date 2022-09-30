#include <bits/stdc++.h>
#define  N 205*3
using namespace std;

class Solution {
private:
    int map[N];
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        for (int i = 0; i < N; ++i) {
            map[i]=0;
        }
        for (int i = 0; i < nums.size(); ++i) {
            map[nums[i]]=1;
        }
        int cnt=0;
        for (int i = 0; i < nums.size(); ++i) {
            if (map[nums[i]]&&map[nums[i]+diff]&&map[nums[i]+2*diff]){
                cnt++;
            }
        }
        return cnt;
    }
};

int main(){
    vector<int> nums={0,1,4,6,7,10};
    int diff=3;
    Solution solution;
    cout<<solution.arithmeticTriplets(nums,diff)<<endl;
    return 0;
}