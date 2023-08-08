#include <bits/stdc++.h>

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
    vector<int>x;
    for(int i = 0; i <pow(10,5);i++){
        int a =0;
        cin>>a;
        x.push_back(a);
    }
    vector<int> v;
    int s =0;
    
    if(s==1) v.push_back(s);
    for(int i=v.size()-1; i>=0; i--){
        cout<<v[i];
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