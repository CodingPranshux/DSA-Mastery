class Solution {
public:
    vector<string> validateCoupons(vector<string> &c, vector<string> &b, vector<bool> &a){
        auto check=[&](string &s){
            return s=="electronics" || s=="grocery" || s=="pharmacy" || s=="restaurant";
        };
        auto isAlpha=[&](string &s){
            if(s.empty()) return false;
            for(char &c:s){
                if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9') || (c=='_')) continue;
                return false;
            }
            return true;
        };
        int n=a.size();
        vector<int> arr;
        for(int i=0;i<n;i++){
            if(a[i] && check(b[i]) && isAlpha(c[i])) arr.emplace_back(i);
        }
        sort(arr.begin(), arr.end(), [&](int x, int y){
            return b[x]==b[y]?c[x]<c[y]:b[x]<b[y];
        });
        vector<string> ans; ans.reserve(arr.size());
        for(int &idx:arr) ans.emplace_back(c[idx]);
        return ans;
    }
};