const int n=256;
class Solution {
public:
    vector<double> sampleStats(vector<int> &count){
        vector<double> ans(5, -1); ans[2]=0;
        int cnt=0, m1=-1, m2=-1;
        for(int i=0;i<n;i++){
            if(!count[i]) continue;
            if(ans[0]==-1) ans[0]=i;
            ans[1]=i;
            ans[2]+=(double)i*(double)count[i];
            cnt+=count[i];
            if(ans[4]==-1 || count[i]>count[ans[4]]) ans[4]=i;
        }
        ans[2]/=cnt;
        long long pos1=(cnt+1)/2, pos2=(cnt%2==1)?pos1:(cnt/2+1), x=0;
        for(int i=0;i<n && (m1==-1 || m2==-1);i++){
            x+=count[i];
            if(m1==-1 && x>=pos1) m1=i;
            if(m2==-1 && x>=pos2) m2=i;
        }
        ans[3]=((double)m1+(double)m2)/2.0;
        return ans;
    }
};