const int MX=500001;
set<int> primes;
vector<int> arr;
class Solution {
public:
    int largestPrime(int n){
        if(primes.empty()){
            bitset<MX> p;
            for(int i=2;i<MX;i++){
                if(p[i]) continue;
                primes.emplace(i);
                for(int j=2*i;j<MX;j+=i) p[j]=1;
            }
            int x=0;
            for(int val:primes){
                x+=val;
                if(x>MX) break;
                if(primes.find(x)!=primes.end()) arr.emplace_back(x);
            }
        }
        auto it=upper_bound(arr.begin(), arr.end(), n);
        return it==arr.begin()?0:*prev(it);
    }
};