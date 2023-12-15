class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
        // int n = nums.size();
        // int i,j,k;
        // for(i=0; i<n; i++){
        //     for(j=i+1; j<n; j++){
        //         if(nums[j]==nums[i]){
        //             for(k=j; k<n-1;k++){
        //                 nums[k] = nums[k+1];
        //             }
        //             j--;
        //             n--;
        //         }
        //     }
        // }
        // // cout << n;
        // return n;
    }
};