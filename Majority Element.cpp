class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int mx_frq=0;
        int mx_frq_num;
        for(auto& chk : m)
        {
            if(chk.second > mx_frq)
            {
                mx_frq=chk.second;
                mx_frq_num =chk.first;
            }
        }
        return mx_frq_num;
    }
};