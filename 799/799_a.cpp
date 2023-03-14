#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int a[4];

    int t=0;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    for(int i=1;i<4;i++){
        if(a[0]<a[i])
            t++;
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

