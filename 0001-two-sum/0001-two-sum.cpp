class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Method3: Optimized but more space
        unordered_map<int, int> mp;

        for(int i=0; i< nums.size(); i++){
            if(mp.find(target - nums[i]) == mp.end())
                mp[nums[i]] = i;
            else
                return {i, mp[target - nums[i]]};
        }

        // Method2: Faster

        // for(int i=0; i< nums.size(); i++){
        //     int complement = target - nums[i];
        //     // std::cout << complement;
        //     auto it = find(nums.begin()+i+1, nums.end(), complement);
        //     std::cout << int(it-nums.begin());
        //     if(it != nums.end()){
        //         int index = it-nums.begin();
        //         return {i, index};
        //     }
        // }


        // Method1: Naive

        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[i] + nums[j] == target){
        //             return {i,j};
        //         }
        //     }
        // }
        return {};
    }
};
