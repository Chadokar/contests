#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);


void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+c > b+c ||(a+c == b+c && c%2 !=0)) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}