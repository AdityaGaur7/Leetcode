#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include<bits/stdc++.h>
class Solution {
public:
    int maximumValue(vector<string>& strs) {
        
        int n = strs.size();
        int maxi = 0;
        for(auto it:strs){
           
           bool x = any_of(it.begin(), it.end(), ::isalpha);
          if(x==true){
            int x = it.size();
               maxi = max(maxi,x);
          }else{
            maxi = max(maxi,stoi(it));
          }
           

            
            
        }
        return maxi;
    }
};