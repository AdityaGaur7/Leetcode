class Solution {
public:
    bool isPalindrome(int x) {
     


    // Write your code here
    vector<int>v;
    if(x<0)return false;
    while(x>0){
        int r= x%10;
        x=x/10;
        v.push_back(r);

    }
int l = v.size();
    int i=0,j=l-1;
    while(i<=j){
        if(v[i]!=v[j])return false;
        i++;j--;
    }
    return true;
}
    
};