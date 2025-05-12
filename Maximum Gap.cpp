class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        vector<int>dif(n);
       if(nums.size()==1)
       {
          return 0;
       } 
       else
       {
          sort(nums.begin(),nums.end());
          for(int i=1;i<n;i++)
          {
            dif[i] = nums[i]-nums[i-1];
          }
          sort(dif.rbegin(),dif.rend());
          int ans = dif[0];
          return ans;
       }
    }
};