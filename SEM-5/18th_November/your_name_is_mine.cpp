#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
bool isSubsequence(const std::string& str1, const std::string& str2) {
    int i = 0, j = 0;
    while (i < str1.length() && j < str2.length()) {
        if (str1[i] == str2[j]) {
            i++;
        }
        j++;
    }
    return (i == str1.length());
}

int main() {
   int t;cin>>t;
   while(t--)
    {
        string m,w;cin>>m>>w;
        if(isSubsequence(m,w) or isSubsequence(w,m)==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}