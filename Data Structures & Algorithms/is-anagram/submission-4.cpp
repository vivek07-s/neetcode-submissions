class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int>ans(26);
        for(int i=0;i<s.size();i++){
            ans[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            int x=--ans[t[i]-'a'];
            if(x<0)
                return false;
        }
        return true;
    }
};
