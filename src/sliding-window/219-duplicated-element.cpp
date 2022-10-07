#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l=0,r=0,n=nums.size();
        map<int,int> freq;
        while (r<=n-1){
            if (freq[nums[r]]){
                while (freq[nums[r]]){
                    freq[nums[l]]--;
                    l++;
                }
                if (abs(r-(l-1))<=k) return true;
            }
            freq[nums[r]]++;
            r++;
        }
        return false;
    }
};

int main(){
    Solution solution;
    vector<int> nums={1,2,3,1,2,3};
    int k=2;
    cout<<solution.containsNearbyDuplicate(nums,k)<<endl;
    return 0;
}
