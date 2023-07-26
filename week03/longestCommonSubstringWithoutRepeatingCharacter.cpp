class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     
        
        int maxSize = 0;
        map<char,int>rem;
        string temp = "";
        for(int i=0; i<s.length(); i++)
        {
            int startPoint = i;
            int endPoint = s.length();
            while(startPoint < endPoint)
            {
                if(rem.count(s[startPoint]) > 0)
                {
                    if(maxSize < rem.size())
                    {
                        
                        maxSize = rem.size();
                    }
                    rem.clear();
                    break;
                  //rem[s[startPoint]]++;
                }
                else
                {
                    rem[s[startPoint]]++;
                }
                startPoint++;
            }
        }
        //cout<<rem.size();
        return maxSize>rem.size() ? maxSize : rem.size();  
    }
};