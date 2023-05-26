#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;

void solve(){
    int n,m,x1,x2,y1,y2;
    cin>>n>>m>>x1>>y1>>x2>>y2;
    int mn = min(n,m);
    if((x1 == 1 && y1 == 1) || (y2==1 && x2==1) || (x1 == n && y1 == m) || (x2 ==n && y2 == m) || (x1 == 1 && y1 == m) || (x1 == n && y1 == 1) || (x2 ==n && y2 == 1) || (x2 ==1 && y2 == m)){
        cout<<2<<endl;
        return;
    }
    if((x1 == 1 || x2 == 1 || y1 == 1|| y2 ==1 || x1 == n || x2 == n || y1 == m || y2 == m)  ){
        cout<<3<<endl;
        return;
    }
    cout<<4<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

