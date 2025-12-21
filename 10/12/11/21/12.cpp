class Solution {
public:
    int minDeletionSize(vector<string> &strs){
        int m=strs.size(), n=strs[0].size(), cnt=m-1, ans=0;
        vector<bool> resolved(m-1, false);
        for(int j=0;j<n && cnt>0;j++){
            bool flag=false;
            for(int i=0;i<m-1;i++){
                if(!resolved[i] && strs[i][j]>strs[i+1][j]){
                    flag=true;
                    break;
                }
            }
            if(flag){
                ans++;
                continue;
            }
            for(int i=0;i<m-1;i++){
                if(!resolved[i] && strs[i][j]<strs[i+1][j]){
                    resolved[i]=true;
                    cnt--;
                }
            }
        }
        return ans;
    }
};