// https://leetcode.com/problems/maximize-the-confusion-of-an-exam/

class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size();
        int t = 0, f = 0;
        int ans = -1;
        int left = 0, right = 0;
        while(right < n){
            if(answerKey[right] == 'T') t++;
            else f++;
            while(left <= right && min(t, f) > k){
                if(answerKey[left] == 'T'){
                    t--;
                } else {
                    f--;
                }
                left++;
            }
            ans = max(right - left + 1, ans);
            right++;
        }      
        return ans;
    }
};