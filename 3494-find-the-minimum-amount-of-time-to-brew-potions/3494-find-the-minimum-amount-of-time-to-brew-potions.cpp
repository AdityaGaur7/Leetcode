class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        
        int n = skill.size();
        int m = mana.size();

        vector<long long>v(n,0);

        for(int j=0;j<m;j++){
            v[0]+=mana[j]*skill[0];

            for(int i=1;i<n;i++){
                v[i]=max(v[i],v[i-1])+1LL*mana[j]*skill[i];
            }
            for(int i=n-1;i>0;i--){
                v[i-1]=v[i]-mana[j]*skill[i];
            }
        }
        return v[n-1];
    }
};