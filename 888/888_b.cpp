#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

int evenOdd(int a){
    return a%2 ==0?5:6;
}


void solve(){
    int n;
    cin>>n;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        int k;cin>>k;
        a.push_back(k);
        b.push_back(k);
    }
    sort(b.begin(),b.end());
    for (int i=0;i<n;i++){
        if(evenOdd(a[i]) != evenOdd(b[i])){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}