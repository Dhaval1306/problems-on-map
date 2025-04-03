class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        
        for(int i=0;i<nums.size();i++)
        {
          m[nums[i]]=i;
        }
        int t;
        for(int i=0;i<nums.size();i++)
        {
             t=target-nums[i];
            if(m.count(t) && m[t]!=i)
            {
                 return {m[t], i};
            }
        }
         return {};
    }
        
    
};
