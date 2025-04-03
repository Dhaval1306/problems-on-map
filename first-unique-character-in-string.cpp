class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int ind=-1;
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]==1)
            {
                ind=i;
                break;
            }
        }
        return ind;
    }
};
