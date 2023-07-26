class Solution {
public:
    bool isAnagram(string s, string t) {
            
        if(s.length() != t.length()) return false;
        map<char,int>bucket; //space O(26)

        for(int i=0; i<s.length(); i++)
        {
            bucket[s[i]]++;
            bucket[t[i]]--;
        }
        for(auto it:bucket) //time O(26)
        {
            if(it.second > 0)
            {
                return false;
            }
        }
        return true; 
        
    }
};