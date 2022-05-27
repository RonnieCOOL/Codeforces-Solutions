#include<bits/stdc++.h>
using namespace std;
#define FIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

void solve(){
    ll n; cin>>n;
    vector <ll> v(n);
    for(ll i = 0; i<n; i++) cin>>v[i];
    ll ans = 0, i;
    for(ll i = 1; i<n; i++){
        if(v[i]<v[i-1]) {ans = (ans > v[i-1]-v[i]) ? ans : (v[i-1]-v[i]); v[i] = v[i-1];}
    }
    for(i = 0; ans>>i; i++);
    cout<<i;

    return;
}

int main(){ 
    FIO;

    ll t = 1;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}