class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        vector<int>arr(26);
            for(int i=0;i<s.size();i++){
                arr[s[i]-'a']++;
            }
            for(int i=0;i<t.size();i++){
                int x=--arr[t[i]-'a'];
                if(x<0)
                    return false;
            }
    return true;
    }
};
