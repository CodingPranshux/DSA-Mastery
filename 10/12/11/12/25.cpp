vector<pair<int, int>> ver(1e5+1), hor(1e5+1);
class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>> &nums){
        for(int i=1;i<=n;i++){
            ver[i]={n, 0};
            hor[i]={n, 0};
        }
        int x, y, ans=0;
        for(vector<int> &vec:nums){
            x=vec[0]; y=vec[1];
            ver[x].first =min(ver[x].first, y);
            ver[x].second=max(ver[x].second, y);
            hor[y].first =min(hor[y].first, x);
            hor[y].second=max(hor[y].second, x);
        }
        for(vector<int> &vec:nums){
            x=vec[0]; y=vec[1];
            ans+=(ver[x].first<y && y<ver[x].second && hor[y].first<x && x<hor[y].second);
        }
        return ans;
    }
};