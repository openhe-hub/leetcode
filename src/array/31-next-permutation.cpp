#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    void nextPermutation(vector<int>& nums) {
        int len=nums.size();
        int prev = nums[len-1];
        bool flag=false;
        for (int i = nums.size() - 2; i >= 0; i--) {
            if(nums[i]<prev){
                int j=len-1;
                while (j>=0&&nums[i]>=nums[j])
                {
                    j--;
                }
                cout<<i<<" "<<j<<endl;
                swap(nums[i],nums[j]);
                reverse(nums.begin()+i+1,nums.end());
                flag=true;
                break;
            }else{
                prev=nums[i];
            }
        }
        if(!flag){
            reverse(nums.begin(),nums.end());
        }
        for (int i = 0; i < len; i++)
        {
            cout<<nums[i]<<" ";
        }
    }
};

int main(int argc, char const* argv[]) {

    return 0;
}