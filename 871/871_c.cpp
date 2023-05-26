#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

void solve(){
    int n;
    cin>>n;
    vector<string> vs;
    vector<int>m;
    for(int i=0;i<n;i++){
        int a;
        string s;
        cin>>a>>s;
        m.push_back(a);
        vs.push_back(s);
    }
    int l =INT_MAX,r =INT_MAX,t =INT_MAX;
    for(int i=0;i<n;i++){
        if(vs[i][0] == '1' && vs[i][1]=='0'){
            l = min(l,m[i]);
        }
        else if(vs[i][0] == '0' && vs[i][1]=='1'){
            r = min(r,m[i]);
        }
        else if(vs[i][0] == '1' && vs[i][1]=='1'){
            t = min(t,m[i]);
        }
    }

    // cout<<"l = "<<l<<", r = "<<r<<", t = "<<t<<endl;

    if((l == INT_MAX || r == INT_MAX) ){
        if(t == INT_MAX)
            cout<<-1<<endl;
        else cout<<t<<endl;
        return;
    }

    cout<<min(l+r,t)<<endl;
    return;
}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

