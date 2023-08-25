#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

void solve(){
    int n;
    cin >> n;
    vector<ll>b,c;
    for(int i = 0; i < n;i++){
        int a;
        cin >> a;
        b.push_back(a);
    }
    if(is_sorted(b.begin(),b.end())){
        cout<<n<<endl;
        for(int i = 0; i < n; i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        return;
    }
    c.push_back(b[0]);
    for(int i = 1; i < n; i++){
        if(b[i-1]>b[i]){
            if(b[i]!=1)
            c.push_back(b[i]-1);
            else c.push_back(b[i]);
            c.push_back(b[i]);
        }
        else c.push_back(b[i]);
    }
    cout<<c.size()<<endl;
    for(int i = 0; i < c.size(); i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
}

int main(){
	ll t;
	cin >> t;
	while (t--){
        solve();
	}
}
