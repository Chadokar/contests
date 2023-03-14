#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    int *a = new int[n];
    int *b = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(a,a+n);
    int k=0,r=a[0],t=0;
    for(int i=0;i<n;i++){
        while(r==a[i]){
            k++;
            //cout<<"r = "<<r<<" ,a["<<i<<"] = "<<a[i]<<endl;
            i++;
        }
        t = t+ k-1;
        //cout<<"k = "<<k<<" ,t = "<<t<<endl;
        r = a[i];k=1;
    }
        if(t%2!=0)
            t=t+1;
        cout<<n-t<<endl;
    }




int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

