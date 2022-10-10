#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numSquares(int n) {
        vector<int> nums;
        int pos=1;
        while(pos*pos<=n){
            nums.push_back(pos*pos);
            pos++;
        }
        
        vector<int> dp(n+1,n);
        dp[0]=0;
        for (int i=0;i<nums.size();i++){
            for(int j=nums[i];j<=n;j++){
                dp[j]= min(dp[j],dp[j-nums[i]]+1);
            }
        }
        
        return dp[n];
    }
};

int main(){
    int target=1;
    Solution solution;
    cout<<solution.numSquares(target)<<endl;
    return 0;
}
