#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>arr,prefix;

int a[1000][1000];
int m,n;
bool yes(int a[][1000],int q,int s,int t){
    bool d,r;
    if(s==n&&t==m){
        if(q==0)
            return true;
        else return false;
    }
    if(s>n){
        q +=a[s+1][t];s;
        d = yes(a,q,s+1,t);
    }
    if(t>m){
        q+=a[s][t+1];
        r = yes(a,q,s,t+1);
    }
    if(r||d) return true;
    else return false;

}

void solve(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int q=a[0][0];
    if(yes(a,q,0,0)){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}

long solve(int A, int B) {
        long n=A;
    for(int i=0;i<B-1;i++){
        if(n%2==0){
            n = n/2;
            cout<<"no = "<<n<<endl;
        }
        else{
            n = (n*3)+1;
            cout<<"no = "<<n<<endl;
        }
    }
    cout<<n<<endl;
}


int main(){
	int t;
	cin>>t;
	while(t--){
	    int a,b;
        cin>>a>>b;
        solve(a,b);
	}
}
