class Solution {
public:
     static bool comparator(const pair<int, int>& p, const pair<int, int>& q) {
        return p.second < q.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int ,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<pair<int,int>>v;
        vector<int>ans;
        for(auto i:m)
        {
            v.push_back({i.first,i.second});
        }
        sort(v.begin(),v.end(),comparator);
          reverse(v.begin(),v.end());
       
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
