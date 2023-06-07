#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);
int a=INT_MAX,b=INT_MIN;


void solve(){
    int n,a,b,c;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		int x;
        cin>>x;
        if(x == 1) a = i+1;
		else if(x == 2) b = i+1;
		else if(x == n) c = i+1;
	}

	if((a<c && b>c)||(b<c && a>c)) cout<<1<<" "<<1;
	else if((c<a && b>a)|| (c>a && b<a)) cout<<a<<" "<<c;
	else if((c<b && a>b) ||(c>b && a<b)) cout<<b<<" "<<c;
    else cout<<a<<" "<<b;
	
    cout<<endl;
}

int main(){
	ll t;
	cin >> t;
	while (t--){
        solve();
	}
}
