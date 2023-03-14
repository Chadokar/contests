#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    char a[8][8];
    for(int i=0;i<8;i++){
        cin>>a[i];
    }
    int l,m,r;
    for(int i=0;i<8;i++){
            r=0;
        for(int j=0;j<8;j++){
            n=m;
            if(a[i][j]=='#')
                {r++;l=i,m=j;if(r==2)break;}
        }
        if(r==2)
            break;
    }
    //cout<<"l = "<<l<<endl;
    //cout<<"m = "<<m<<endl;
    //cout<<"n = "<<n<<endl;
    int s,t;
    s = (m+n)/2;
    t = (m-n+1)/2;
    cout<<l+t+1<<" "<<s+1<<endl;
}




int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}


