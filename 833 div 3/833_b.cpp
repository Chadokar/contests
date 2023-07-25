#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

void solve(){
    string s;
    char k;
    for(int i=0;i< 3;i++){
        string c;
        cin>>c;
        s+=c;
    }
    bool a = false,b = false, c = false;
    for(int i=0;i<3;i++){
        if(((s[0 + i] == s[3+i] )&&(s[3+i] == s[6+i]))&& s[0+i]!= '.'){
            a = true;
            k = s[0 + i];
        }
    }
    for(int i=0;i<3;i++){
        if((s[0 + i*3] == s[1+i*3]) &&(s[1+i*3]== s[2+i*3]) && s[0 + i*3] !='.'){
            b = true;
            k = s[0 + i*3];
        }
    }
    if((s[0] ==s[4] && s[4] == s[8] && s[0]!='.')  ){
        c = true;
        k = s[0];
    }
    if((s[2] == s[4] && s[4] == s[6] && s[2]!='.') ){
        c = true;
        k = s[2];
    }
    if((a&&b || b&&c || c&&a) || (!a && !b && !c))
    cout<<"DRAW"<<endl;
    else if(a || b || c){
        cout<<k<<endl;
    }
}

int main(){
	ll t;
	cin >> t;
	while (t--){
        solve();
	}
}
