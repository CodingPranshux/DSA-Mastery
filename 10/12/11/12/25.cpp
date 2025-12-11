class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int,vector<int>>rows;
        unordered_map<int,vector<int>>cols;
        for(auto it:buildings){
            int x=it[0];
            int y=it[1];
            rows[x].push_back(y);
            cols[y].push_back(x);
            
        }
        for(auto &it:rows){
            sort(it.second.begin(),it.second.end());
        }
        for(auto &it:cols){
            sort(it.second.begin(),it.second.end());
        }
        int cnt=0;
        for(auto it:buildings){
            int x=it[0];
            int y=it[1];
            
            auto it1=lower_bound(rows[x].begin(),rows[x].end(),y);
            auto it2=upper_bound(rows[x].begin(),rows[x].end(),y);
            if(it1==rows[x].begin() || it2==rows[x].end()){
                continue;
            }
            auto it3=lower_bound(cols[y].begin(),cols[y].end(),x);
            auto it4=upper_bound(cols[y].begin(),cols[y].end(),x);
            if(it3==cols[y].begin() || it4==cols[y].end()){
                continue;
            }
            cnt++;
            
        }
        return cnt;
    }
};