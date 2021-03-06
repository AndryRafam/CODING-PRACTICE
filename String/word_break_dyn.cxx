// Word breaking O(N³) complexity (Dynamic programming)

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static bool word_break(string s, vector<string> &dict, vector<int> &dp){
        int n = s.size();
        if(n==0)
            return true;
        if(dp[n]==-1){
            dp[n]=false;
            for(auto i = 1; i <= n; i++){
                if(find(dict.begin(),dict.end(),s.substr(0,i)) != dict.end() && word_break(s.substr(i),dict,dp))
                    dp[n]=true;
            }
        }
        return dp[n];
    }
};

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    string test = "lintcode";
    int n = test.size();
    vector<int> dp(n+1,-1);
    vector<string> dict = {"lint","de","co"};
    cout << Solution::word_break(test,dict,dp); // True
}
