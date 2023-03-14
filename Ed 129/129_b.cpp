#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll sum(int a[],int n){
    ll s=0;
    for(int i=0;i<n;i++){
        s =s+a[i];
    }
    return s;
}


int main(){
	ll t;
	cin>>t;
	while(t--){
	    int m,n;
        cin>>n;
        int *a = new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>m;
        int *b = new int[m];
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        int l;
        ll k = sum(b,m);
        l = k%n;
        cout<<a[l]<<endl;


	}
}
