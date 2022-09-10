#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        //sort
        map<int,priority_queue<int,vector<int>,less<>>> dict;
        for (int i = 0; i < values.size(); ++i) {
            dict[labels[i]].push(values[i]);
        }
        //init
        priority_queue<int,vector<int>,less<int>> pq;
        for(auto item:dict){
            auto tmp=item.second;
            for (int i = 0; i < useLimit && !tmp.empty(); ++i) {
                pq.push(tmp.top());
                tmp.pop();
            }
        }
        //select
        int ret=0;
        while (numWanted>=1&&!pq.empty()){
            ret+=pq.top();
            pq.pop();
            numWanted--;
        }
        return ret;
    }
};

int main(){

    return 0;
}