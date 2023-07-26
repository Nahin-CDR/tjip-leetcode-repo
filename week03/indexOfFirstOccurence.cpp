class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "") return 0;
        if(needle == haystack) return 0;
        int start = 0;
        int count = 0;
        string temp = "";
        
        for(int i=0; i<haystack.length(); i++)
        {
            temp += haystack[i];
            int turn1 = haystack.length();
            int turn2 = needle.length()-1;
            int j = i+1;
            while(j<turn1 and turn2>0)
            {
                temp += haystack[j];
                j++;
                turn2--;
            }
            if(temp == needle) return i;
            else temp = "";
        }
        return -1;
    }
};