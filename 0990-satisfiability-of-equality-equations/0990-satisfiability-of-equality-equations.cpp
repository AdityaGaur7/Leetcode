class Solution {
public:
vector<int> parent;
vector<int> rank;

int find (int x) {
    if (x == parent[x]) 
        return x;

    return parent[x] = find(parent[x]);
}

void Union (int x, int y) {
    int x_parent = find(x);
    int y_parent = find(y);

    if (x_parent == y_parent) 
        return;

    if(rank[x_parent] > rank[y_parent]) {
        parent[y_parent] = x_parent;
    } else if(rank[x_parent] < rank[y_parent]) {
        parent[x_parent] = y_parent;
    } else {
        parent[x_parent] = y_parent;
        rank[y_parent]++;
    }
}
    bool equationsPossible(vector<string>& e) {
        int n = e.size();
        parent.resize(26);
        rank.resize(26,0);
        for(int i=0;i<26;i++){
            parent[i]=i;
        }
        for(string &s :e){
            if(s[1]=='='){
                Union(s[0]-'a',s[3]-'a');
            }
        }
        for(string &s:e){
           if(s[1]=='!'){
              int x = find(s[0]-'a');
            int y = find(s[3]-'a');
            if(x==y)return false;
           }
                
        }
        return 1;
    }
};