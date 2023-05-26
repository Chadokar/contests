#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int t;
    if(n%2!=0){
        t = (n/2)+1;
        if(k>(n/2)+1){
        cout<<"NO1"<<endl;
        
        return;}
    }
    else if(n%2 ==0 ){
        t = (n/2);
        if( k>(n/2)){
        cout<<"NO2"<<endl;
        return;}
    }
    cout<<"t = "<<t<<" ,k = "<<k<<endl;
    if((t-k)%2==0) cout<<"Yes"<<endl;
    else cout<<"NO3"<<endl;
    
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
