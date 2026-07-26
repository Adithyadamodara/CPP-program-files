#include<bits/stdc++.h>
using namespace std;


void generateSeq(vector<int>& arr,vector<int>& subSeq, int idx){
    if(idx == arr.size()) {
        for(int i:subSeq){
            cout<<i<<" ";
        }cout<<endl;
        return; 
    }

    subSeq.push_back(arr[idx]);
    generateSeq(arr, subSeq, idx+1);

    subSeq.pop_back();
    generateSeq(arr, subSeq, idx+1);
}


int main(){
    vector<int> arr = {1,2,3,4,5};
    vector<int> sub;
    generateSeq(arr, sub, 0);
    return 0;
}

