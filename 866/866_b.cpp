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

    ll b=0,e=0;
    ll m=0;
    ll k = s.length();

    if(s[0] == '1'){
        ll i=0;
        while(i<s.length() && s[i] == '1'){
            b++;
            i++;
        }
    }
    if(s[s.length()-1] =='1'){
        ll i = s.length()-1;
        while(i>=0 && s[i] == '1'){
            e++;
            i--;
        }
    }

    for(ll i=0;i<s.length();i++){
        ll t = 0;
        while(s[i]=='1' && i<s.length()){
            t++;
            i++;
            if(s[i]=='0')
            break;
        }
        m = max(m,t);
    }
    // cout<<endl;

    // ll n = max(m,(ll)(b.length() + e.length()));
    ll n = max(m,b+e);

    if(n%2 ==0){
        ll l = (n/2)*((n/2)+1);
        if(e == s.length())
         l = s.length()*s.length();
        cout<<l<<endl;
    }
    else {
        ll l = ((n+1)/2)*((n+1)/2);
        cout<<l<<endl;
    }
}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

