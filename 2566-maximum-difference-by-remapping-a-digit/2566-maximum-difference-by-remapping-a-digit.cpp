class Solution {
public:
    int minMaxDifference(int num) {
        string x  = to_string(num);
        int n = x.size();
    int i=0;
        for(;i<n;i++){
            if(x[i]<'9')break;
        }
       char number = x[i];
       string big = x;
       for(int i=0;i<n;i++){
        if(big[i]==number)big[i]='9';
       }
       char munber = x[0];
       cout<<munber<<endl;
       string small = x;
       for(int i=0;i<n;i++){
        if(small[i]==munber)small[i]='0';
       }
      
    cout<<stoi(big)<<" "<<stoi(small)<<endl;
    int ans = stoi(big)-stoi(small);
    return ans;
    }
};