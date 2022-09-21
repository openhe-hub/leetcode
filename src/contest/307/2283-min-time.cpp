#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int> &energy, vector<int> &experience) {
        int res = 0, sum_energy = 0, sum_exp = 0;
        for (int i = 0; i < energy.size(); ++i) {
            sum_energy += energy[i];
            sum_exp+=experience[i];
        }
        if ((sum_energy+1)>=initialEnergy){
            res += sum_energy + 1 - initialEnergy;
        }


        int i;
        for (i = sum_exp; i >=initialExperience ; --i) {
            bool flag= true;
            int exp=i;
            for (int j = 0; j < experience.size(); ++j) {
                if (exp>experience[j]) exp+=experience[j];
                else{
                    flag= false;
                }
            }
            if (!flag) break;
        }
        if ((i+1)>=initialExperience){
            res+=(i+1)-initialExperience;
        }
        return res;
    }
};

int main() {
    Solution solution;
    vector<int> energy={1};
    vector<int> exp={2};
    cout<<solution.minNumberOfHours(2,2,energy,exp)<<endl;
    return 0;
}