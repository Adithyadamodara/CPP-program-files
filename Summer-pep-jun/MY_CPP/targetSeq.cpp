#include<bits/stdc++.h>
using namespace std;

void targetSeq(vector<int>& arr, vector<int>& seq, int sum, int target, int idx){
   
    if(idx == arr.size()) {
        if(sum == target){
            for(int i:seq){
                cout<<i<<" ";
            }
            cout<<" - "<<sum<<endl;
        }
        return;
    }
    seq.push_back(arr[idx]);
    targetSeq(arr, seq, sum + arr[idx], target, idx + 1);

    seq.pop_back();
    targetSeq(arr, seq, sum, target, idx +1);
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    vector<int> seq = {};
    targetSeq(arr, seq, 0, 8, 0);

    return 0;
}

