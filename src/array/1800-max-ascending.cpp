#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int i=0,j=0,n=nums.size(),sum=0,ret=0;
        while (j<=n-1){
            if (!j||nums[j]>nums[j-1]){
                sum+=nums[j];
            }else{
                ret= max(ret,sum);
                sum=nums[j];
                i=j;
            }
            j++;
        }
        ret= max(ret,sum);
        return ret;
    }
};

int main(){
    vector<int> nums={10,20,30,40,50};
    Solution solution;
    cout<<solution.maxAscendingSum(nums)<<endl;
    return 0;
}
