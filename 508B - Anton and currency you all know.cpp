#include<bits/stdc++.h>
using namespace std;
#define FIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

void solve(){
    string s; cin>>s;
    int n = s.length(), index = n-1;
    for(int i = 0; i<n-1; i++){
        if((s[i]-'0')%2 == 0){
            index = i;
            if(s[n-1]>s[i]) break;
        }
    }
    if(index == n-1) cout<<-1;
    else{
        swap(s[index], s[n-1]);
        cout<<s;
    }

    return;
}

int main(){ 
    FIO;

    ll t = 1;
    // cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}