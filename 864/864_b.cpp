#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

void solve(){
    int n,k;
    cin>>n>>k;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    // cout<<"n = "<<n<<endl;
    if(n==1) {
        cout<<"Yes"<<endl;
        return;
    }
    int ans =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                // cout<<"i = "<<i<<", j = "<< j<<", n-i = "<<n-i<<", n-j = "<<n-j<<endl;
                if(a[i][j]!= a[n-i-1][n-j-1]){
                    // cout<<"a["<<i+1<<"]["<<j+1<<"] = "<<a[i][j]<<endl;
                    // cout<<"a["<<n-i<<"]["<<n-j<<"] = "<<a[n-i-1][n-j-1]<<endl;
                    a[i][j] = a[n-i-1][n-j-1];
                    ans++;
                    // cout<<"a["<<i+1<<"]["<<j+1<<"] = "<<a[i][j]<<endl;
                    // cout<<"a["<<n-i<<"]["<<n-j<<"] = "<<a[n-i-1][n-j-1]<<endl;
                }
            
        }
    }

    // cout<<"ans = "<<ans<<endl;

    if(ans >= 0 && n%2 != 0 && (k-ans)>=0) {cout<<"Yes"<<endl;return;}

    if((k-ans)%2 == 0 && (k-ans)>=0) cout<<"Yes";
    else cout<<"No";
    cout<<endl;

}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

