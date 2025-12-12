class Solution {
public:
    vector<int> countMentions(int n, vector<vector<string>> &events){
        int i, len, t, id;
        vector<int> ans(n, 0);
        vector<bool> online(n, true);
        sort(events.begin(), events.end(), [&](vector<string> &a, vector<string> &b){
            int t1=stoi(a[1]), t2=stoi(b[1]);
            if(t1!=t2) return t1<t2;
            if(a[0][0]=='O') return true;
            if(b[0][0]=='O') return false;
            return true;
        });
        deque<pair<int, int>> dq;
        for(vector<string> &s:events){
            t=stoi(s[1]);
            while(!dq.empty() && t>=dq.front().first){
                online[dq.front().second]=true;
                dq.pop_front();
            }

            if(s[0][0]=='M'){
                if(s[2][0]=='A') for(int i=0;i<n;i++) ans[i]++;
                else if(s[2][0]=='H') for(int i=0;i<n;i++) ans[i]+=online[i];
                else{
                    i=0; len=s[2].size();
                    while(i<len){
                        id=0;
                        while(i<len && s[2][i]!='d') i++;
                        i++;
                        while(i<len && s[2][i]!=' ') id=id*10+(s[2][i++]-'0');
                        ans[id]++;
                    }
                }
            }
            else{
                dq.emplace_back(t+60, stoi(s[2]));
                online[stoi(s[2])]=false;
            }
        }
        return ans;
    }
};