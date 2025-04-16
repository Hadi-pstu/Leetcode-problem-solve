class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            set<int>s;
            int i;
            int n=nums.size();
            for(i=0;i<n;i++)
            {
                s.insert(nums[i]);
            }
            int Set = s.size();
            if(Set < n)
            {
                return true;
            }
            else
            {
                return false;
            }
    
            
        }
    };