#include<bits/stdc++.h>
using namespace std ;
#define ll long long 


bool func( int idx , int target , vector<int>&notes , vector<vector<int>>&dp ){
      
      if( target == 0 ) return true ;
      if( idx == dp.size() ) return false ;
      if( dp[idx][target] != -1 ){
          if( dp[idx][target] == 1 ) return true ;
          else return false ;
      }
      
      bool ansL = false ;
      bool ansR = false ; 
      if( target - notes[idx] >= 0 )
      ansL = func( idx+1 , target - notes[idx] , notes , dp ) ;
      ansR = func( idx+1 , target , notes , dp ) ;
      bool a =  (ansL | ansR) ; 
      dp[idx][target] = a ;
      return dp[idx][target] ;
     
} 

int main(){
    int tc ; cin >> tc ;
    while ( tc -- ){
        int n , target  ; cin >> n  >> target ;
        vector<int>notes(n) ;
        for( int i = 0 ; i < n ; i++)  cin >> notes[i] ;
        vector<vector<int>>dp ;
        for( int i = 0 ; i < n ; i++ ){
            vector<int>v( target+1 ,-1) ;
            dp.push_back(v) ;
        }
        
        bool ans = func( 0 , target , notes , dp ) ; 
        if( ans == false ) cout <<"No\n";
        else cout << "Yes\n";
        
    }
}