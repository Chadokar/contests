#include<bits/stdc++.h>
using namespace std;
#define ll long long

int s(ll a[]){
    int n=0;
    int i=0;
    while(a[i]){
        i++;
    }
    return i;
}

void solve(){
    int n;
    cin>>n;
    int *a = new int[n];
    int *b = new int[n];
    c=false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(b[i]>i+1)
        c = true;
    }
    if(c)

    for(int i=0;i<n-1;i++){
        int k = *min_element(a+i+1,a+n);
        if(k>1)
    }

}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

