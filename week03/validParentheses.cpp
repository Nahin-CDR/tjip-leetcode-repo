class Solution {
public:
    
    bool isOpen(char ch){
            if(ch == '{' || ch == '[' || ch =='('){
                return true;
            }else{
                return false;
            }
    }
    
    bool isValid(string s) {

        unordered_map<char,char>umap;
        umap['('] = ')';
        umap['{'] = '}';
        umap['['] = ']';

        stack<char>st;

        for(char ch : s){
            if(isOpen(ch)){
                st.push(umap[ch]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else if(st.top() != ch){
                    return false;
                }else{
                    st.pop();
                }
            }
        }

        return st.empty()? true : false;
    }
};