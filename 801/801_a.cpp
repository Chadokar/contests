#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>arr,prefix;



void solve(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n%2==0)
        cout<<"Joe"<<endl;
    else cout<<"Mike"<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}
