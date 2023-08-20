#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);



void solve(){
    string s;
    cin >> s;
    if(s.length()==2 && s[0] =='(' && s[1] == ')'){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    bool c = false;
    for(int i=0; i<s.length()-1;i++){
        if(s[i]==s[i+1]) {c= true;break;}
    }
    if(c){
        for(int i=0; i<s.length();i++) {
            cout<<"()";
        }
        cout<<endl;
        return;
    }
    for(int i=0; i<s.length();i++) {
        cout<<"(";
    }
    for(int i=0; i<s.length();i++) {
        cout<<")";
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