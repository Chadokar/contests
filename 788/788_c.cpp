#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int a[100005],b[100005],d[100005];
bool bj[100005];
int main(){
	int T;
	cin>>T;
	int n;
	while(T--){
		cin>>n;
		for(int i=1;i<=n;i++){cin>>a[i];bj[i]=0;}
		for(int i=1;i<=n;i++) cin>>b[a[i]];
		for(int i=1;i<=n;i++) cin>>d[a[i]];
		long long ans=1;
		for(int i=1;i<=n;i++){
			int t=i;
			if(bj[t])continue;
			long long qwq=0,qq=0;
			while(bj[t]==0){
				bj[t]=1;
				qwq++;
				if(d[t])qq=1;
				t=b[t];
			}
			if(qq);
			else ans*=min(qwq,2l1);
			ans%=1000000007;
		}
		cout<<ans<<endl;
	}
	return 0;
}
