#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

void solve(){
    string s;
    cin>>s;

    if(s.length()==1){
        if(s[0] == '1')
        cout<<1;
        else cout<<0;
        cout<<endl;
        return;
    }

    ll m=0, count=0;

    for (int i=0; i<2*s.length(); i++) {
        if (count == s.length()) {
            m = count;
            break;
        }
        if (s[i%s.length()]=='1') count ++;
        else {
            m=max(m,count);
            count=0;
        }
    }
    m++;

    cout << (m/2) * (m-(m/2)) << '\n';
}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

