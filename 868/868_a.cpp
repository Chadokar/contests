#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v;
    bool c = false;
    int a = -1,b = -1;
    for(int i=1;i<=n;i++){
        a = n-i;
        int a1 = a*(a-1)/2;
        b =i;
        int b1 = b*(b-1)/2;
        if(a1+b1 == k){
            c = true;
            break;
        }
    }

    if(!c){
        cout<<"NO"<<endl;
        return;
    }

    else cout<<"YES"<<endl;

    while(a--){
        cout<<-1<<" ";
    }
    while(b--){
        cout<<1<<" ";
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

