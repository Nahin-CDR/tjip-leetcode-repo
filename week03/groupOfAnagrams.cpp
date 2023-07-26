class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>>ans;
        if(strs.size() == 0) return ans;
        map<string,vector<string>>mp;
        for(int i = 0; i<strs.size(); i++)
        {
            string temp1 = strs[i];
            sort(temp1.begin(),temp1.end());
            mp[temp1].push_back(strs[i]);
        }
        for(auto it : mp)
        {
            ans.push_back(it.second);
        }
        
       
        return ans;
    }
};