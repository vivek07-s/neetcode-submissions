class Solution {
public:
    vector<int> getConcatenation(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n*2);
            for(int i=0;i<arr.size();i++){
                ans[i]=arr[i];
                ans[i+n]=arr[i];
            }
    return ans;  
    }
};