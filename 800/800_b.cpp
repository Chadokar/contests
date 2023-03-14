#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;



void solve(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int t =n;
    int r =0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(!r)
            r++;
            else{
                if(s[i-1]=='0')
                    r++;
            }
        }
    }
    r = (r*(r-1))/2;

    t+=r;
    r=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='1'&&s[i+1]=='0')
            r++;
    }
    t+=r;
    for(int i=0;i<n;i++){
        r=0;
        while(s[i]=='0'&& i<n){
            r++;i++;
        }
        if(s[i]=='1')
        t+=r;
    }
    cout<<t<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

