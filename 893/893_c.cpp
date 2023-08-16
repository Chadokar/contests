#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

int givemx(int a,int b) {
    int m = 1;
    for(int i=1;i<=b;i++){
        if(a> b*i){
            m = max(m,b*i);
        }
    }
    return m;
}


void solve(){
    int n;
    cin >> n;
    unordered_map<int,bool>m;
    for(int i=1;i<=n;i++){
        m[i] = false;
    }
    vector<int>v;
    for(int i=1;i<=n/2;i++){
        int k =i;
        while(k<=n){
            if(!m[k]){
                v.push_back(k);
                m[k] = true;
            }
            k = k*2;
        }
    }
    for(int i=1;i<=n;i++){
        if(!m[i]) {
            v.push_back(i);
            m[i]= true;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}