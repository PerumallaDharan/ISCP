#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string a,b; cin>>a>>b;               // STRINGS INPUT IS TAKEN
        
        vector<bool>v(a.size(),false);       // A BOOL TYPE VECTOR IS FORMED
        for(int i=0;i<a.size();i++){         // ALL ELEMENTS ARE INTIALISED WITH FALSE
            if(a[i]!=b[i]) v[i]=true;        // IF ELEMENTS ARE NOT EQUAL MAKE V[I] TRUE
        }
        
        int count=0;                         // NOW A COUNT VARIABLE IS DEFINED AS 0
        for(int i=0;i<v.size();i++){         // GOING IN LOOP OF VECTOR
            
            if(v[i]==true) count++;          // IF WE GET TRUE ELEMENT THEN COUNT++
            else continue;                   // ELSE FALSE THEN NOTHING TO DO FURTHER
            
            for(int j=i+2;;j+=2){            // FOR TRUE ELEMENT WE WILL CHECK WHETHER
                if(j>=v.size()) break;      // HOW MANY FURTHER ELEMENTS CAN BE CONVERTED
                if(v[j]==true) v[j]=false;   // IF ELEMENT IS TRUE THEN MAKE IT FALSE AS
                else break;                   // LATER ON IT WILL NOT BE TREATED
            }                                 // IF NOT TRUE THEN BREAK FROM THE LOOP
            
        }
        
        cout<<count<<"\n";
    }
    return 0;
}