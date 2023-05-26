#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    int k = 0;
    if(s[0] == '^' && s.length()==1){
        cout<<1<<endl;
        return;
    }
    // cout<<"str = "<<s.substr(0,0)<<endl;
    for(int i=0;i<s.length();i++){
        if(s[i] == '_'){
            if((i>0 && s[i-1]!='^') || i == 0){
                s = s.substr(0,i) + '^' + s.substr(i,s.length());
                k++;
                // cout<<"k1 = "<<k<<", i = "<<i<<", s = "<<s<<endl;
                i++;
            }
            if( (i!=s.length()-1 && s[i+1]!='^') || i == s.length()-1){
                s = s.substr(0,i+1) + '^' + s.substr(i+1,s.length());
                k++;
                // cout<<"k2 = "<<k<<", i = "<<i<<", s = "<<s<<endl;
            }
        }
        
    }
    // cout<<"k = "<<k<<endl;
    cout<<k<<endl;

}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

