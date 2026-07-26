#include<bits/stdc++.h>
using namespace std;

void targetSeqSizeK(vector<int>& arr, vector<int>& seq, int target, int k, int sum, int idx){
    if(seq.size() == k){
        if(sum == target){
            for(int i:seq){
                cout<<i<<" ";
            }
            cout<<" - "<<sum<<endl;
        }
        return;
    }
    if(idx == arr.size()) return;

    if( k - seq.size() > arr.size() - idx) return;

    seq.push_back(arr[idx]);
    targetSeqSizeK(arr, seq, target, k, sum + arr[idx], idx + 1);
    seq.pop_back();
    targetSeqSizeK(arr, seq, target, k, sum, idx + 1);
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> seq;
    targetSeqSizeK(arr, seq, 8, 3, 0 , 0);
    return 0;
}

