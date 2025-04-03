class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        sort(nums.begin(),nums.end());
        int ma=0;
      
        for(int i=0;i<nums.size();i++)
        {
            if (s.find(nums[i] - 1) == s.end()) {
                int currentNum = nums[i];
                int count = 1;

                
                while (s.find(currentNum + 1) != s.end()) {
                    currentNum++;
                    count++;
                }
                            ma=max(ma,count);

            }
            
        }
        return ma;
    }
};
