#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> freq;
        for (const auto &num: nums){
            if (!freq.count(num)){
                freq.insert(make_pair(num,1));
            }else{
                freq[num]++;
            }
        }
        sort(nums.begin(),nums.end(),[&](int num1,int num2){
            if (freq[num1]!=freq[num2]){
                return freq[num1]<freq[num2];
            }else {
                return num1 > num2;
            }
        });
        return nums;
    }
};


int main(){
    vector<int> nums={-1,1,-6,4,5,-6,1,4,1};
    Solution solution;
    nums=solution.frequencySort(nums);
    for (const auto &item: nums){
        cout<<item<<endl;
    }
    return 0;
}