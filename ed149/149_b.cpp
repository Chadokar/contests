#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

void solve(){
    ll n;
    string s;
    cin>>n>>s;
    int a=1,b=1;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            a++;
        }
        else a = 1;
        b = max(b,a);
    }
    cout<<b+1<<endl;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
        solve();
	}
}


// 3
// 4
// 8
// 5
// 5
// 4
// 2
// 4



// 4
// 4
// 4
// 4
// 3
// 7
// 3
// 4
// 4
// 6
// 3
// 4
// 5
// 3
// 3
// 3
// 3
// 4
// 4
// 4
// 5
// 4
// 5
// 5
// 6
// 2
// 4
// 3
// 4
// 8
// 5
// 5
// 4
// 2
// 4
// 7
// 3
// 3
// 4
// 6
// 5
// 3
// 3
// 5
// 3
// 5
// 6
// 3
// 7
// 4
// 5
// 2
// 3
// 6
// 3
// 4
// 7
// 3
// 3
// 5
// 5
// 4
// 3
// 6
// 5
// 7
// 4
// 3
// 3
// 3
// 2
// 3
// 6
// 3
// 3
// 4
// 8
// 5
// 7
// 4
// 4
// 4
// 4
// 5
// 7
// 3
// 3
// 3
// 5
// 5
// 6
// 2
// 4
// 3
// 5
// 4
// 3
// 3
// 4
// 4
// 8
// 5
// 3
// 5
// 3
// 5
// 5
// 4
// 4
// 4
// 4
// 5
// 5
// 4
// 3
// 5
// 6
// 5
// 4
// 4
// 5
// 5
// 5
// 6
// 4
// 6
// 3
// 3
// 6
// 7
// 4
// 6
// 3
// 6
// 4
// 4
// 4
// 4
// 3
// 6
// 7
// 4
// 6
// 4
// 7
// 6
// 4
// 4
// 5
// 4
// 3
// 6
// 4
// 3
// 7
// 5
// 4
// 5
// 2
// 4
// 5
// 5
// 4
// 4
// 7
// 3
// 4
// 7
// 4
// 4
// 5