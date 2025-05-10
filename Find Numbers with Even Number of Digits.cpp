class Solution {
    public:
        int findNumbers(vector<int>& nums) {
            int count = 0;
            string number_length;
            for(int i =0 ;i<nums.size();i++)
            {
                number_length = to_string(nums[i]);
                if(number_length.length() % 2 == 0)
                {
                    count++;
                }
            }
            return count;
        }
    };