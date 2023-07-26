class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        
        int len = str.size();
        if(len==0) return "";
        
        string ans  = "";
        sort(begin(str), end(str));
        string smallest = str[0];
        string biggest = str[len-1];
        
        for(int i=0; i<smallest.size(); i++){
            if(smallest[i] == biggest[i])
            {
                ans = ans + smallest[i];
            }
            else
            {
                break;
            }
        }
        
        return ans;
    }
};