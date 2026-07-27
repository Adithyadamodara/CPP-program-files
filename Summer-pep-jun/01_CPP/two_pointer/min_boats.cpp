// https://leetcode.com/problems/boats-to-save-people/

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int left = 0;
        int right = people.size() -1;
        int count = 0;
        while(left <= right){
            if(left == right){
                count++;
                break;
            }
            if(limit - people[right] >= people[left]){
                count++;
                right--;
                left++;
            } else {
                count++; 
                right--;
            }
        }
        return count;
    }
};