class Solution {
private:
    void print(vector<int>&v){
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    
    void delleft(vector<int>&v){
        int n = v.size();
        vector<int> temp;
        
        for(int i = 1; i < n; i += 2){ 
            temp.push_back(v[i]);
        }
        
        v = temp;
        cout<<"left: ";
        print(v);
    }
    
    void delright(vector<int>&v){
        int n = v.size();
        vector<int> temp;
        
        for(int i = n - 2; i >= 0; i -= 2){ 
            temp.push_back(v[i]);
        }
        
        reverse(temp.begin(), temp.end()); 
        v = temp;
        cout<<"right: ";
        print(v);
    }
    
public:
    int lastRemaining(int n) {
     int head = 1;    
        int step = 1;   
        int remaining = n;
        bool left = true; 

        while (remaining > 1) {
            
            if (left || remaining % 2 == 1) {
                head += step;
            }
            remaining /= 2;    
            step *= 2;         
            left = !left;        
        }
        
        return head;
    }
};
