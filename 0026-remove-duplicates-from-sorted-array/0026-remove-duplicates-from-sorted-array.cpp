class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i,j,k;
        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                if(nums[j]==nums[i]){
                    for(k=j; k<n-1;k++){
                        nums[k] = nums[k+1];
                    }
                    j--;
                    n--;
                }
            }
        }
        // cout << n;
        return n;
    }
};