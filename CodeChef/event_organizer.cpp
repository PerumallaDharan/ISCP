#include <bits/stdc++.h>
using namespace std;

// hame event ke start aur end aur cost diye hai aur hame 
// total earning maximize karn hai 
// ham kaise decision le ki kis event ko le ya na le 
// man lo agar ham koi event le lete hai jo kuchh paise deti hai 
// to ho sakta hai ki koi dusri event lene se jo ki beech me shuru honi hai 
// usme jyada paise milte
// kya ye dp problem hai 
// kyuki hamare paas option hai ki ham kisi event ko le ya na le 


void solve(){
    int n;
    cin>>n;
    int s,e,c;
    vector<vector<int>> v;
    for(int i=0;i<n;++i){
        cin>>s>>e>>c;
        v.push_back({s,e,c});
    }
    
    
    vector<int> dp(49,0);
    for(int i=1;i<=48;++i){
        int max_val=dp[i-1];
        for(int j=0;j<n;++j){
            if(v[j][1]==i){
                max_val=max(max_val,v[j][2]+dp[v[j][0]]);
            }
        }
        dp[i]=max_val;
    }
    cout<<dp[48]<<endl;
    
}



int main() {
	// your code goes here
	ios::sync_with_stdio(0); cin.tie(0);
// 	solve();
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}