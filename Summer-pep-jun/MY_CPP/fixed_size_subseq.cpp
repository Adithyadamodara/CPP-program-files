#include<bits/stdc++.h>
using namespace std;

void fixedSizeSeq(vector<int>& arr, vector<int>& seq, int k, int idx){
    if(seq.size() == k){
        for(int i:seq){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    if(idx == arr.size()) return;
    
    if(k - seq.size() > arr.size() - idx) return;

    seq.push_back(arr[idx]);
    fixedSizeSeq(arr, seq, k, idx+1);
    seq.pop_back();
    fixedSizeSeq(arr, seq, k, idx+1);
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    vector<int> seq = {};
    fixedSizeSeq(arr, seq, 2, 0);
    return 0;
}
