class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            cout<< nums[i];
            
        }
    }
};