class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        unordered_map<int,int>mp;
            for(int i=0;i<n;i++){
                int f=arr[i];
                int s=target-f;
                if(mp.find(s)!=mp.end()){
                    return{mp[s],i};
                }
                mp[arr[i]]=i;
            }
            return{};
    }
};
