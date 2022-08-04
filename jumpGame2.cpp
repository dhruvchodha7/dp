class Solution {
public:
    int jump(vector<int>& nums) {
    int reach = 0, jumps = 0, curr = 0;
    int n = nums.size();
    if(n == 1) return 0;
    for(int i=0; i<n-1; i++){
        reach = max(reach, i+nums[i]);
        if(curr>n-1) break;
        if(i==curr){
            curr=reach;
            jumps++;
        }
    }
    return jumps;
    }

};