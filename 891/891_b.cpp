#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

int findRoot(int a,int b,int c){
    int d = b * b - 4 * a * c;
    int sqrt_val = sqrt(abs(d));
    return (-b + sqrt_val) / (2 * a);
}

void solve(){
    string s,b,m;
    cin>>s;
    int n = s.length();
    int t = 0,i=0;
    for( i=0;i<n;i++){
        if(s[i]>='5'){
            t =1;
            break;
        }
    }
    for(int j=i;j>=0;j--){
        int k = (s[j] -'0') + t;
        if(k>=5){
            s[j] = '0';
        }
        else {
            s[j] = ((s[j] -'0') + t) + '0';
            t =0;
            break;
        }
    }
    if(t) b +=('1' + s);
    else b +=s;
    cout << b <<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}