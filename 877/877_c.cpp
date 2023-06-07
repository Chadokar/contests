#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);
int a=INT_MAX,b=INT_MIN;


void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>g;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2 ==0)
            g.push_back((i*m) + j+1);
        }
    }

    int k=0;
    for(int i=0;i<n;i++){
        if(i%2 ==0){
            int l = g.size() - (m*(k+1));
            k++;
            for(int j=0;j<m;j++){
                cout<<g[l++]<<" ";
            }
            cout<<endl;
        }
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2 !=0)
            v.push_back((i*m) + j+1);
        }
    }
    // cout<<" v = "<<v.size()<<endl;
    k=0;
    for(int i=0;i<n;i++){
        if(i%2 !=0)
        {int l = v.size() - (m*(k+1));
        k++;
        // cout<<"l1 = "<<l<<endl;
        for(int j=0;j<m;j++){
            cout<<v[l++]<<" ";
        }
        // cout<<"l2 = "<<l<<endl;
        if(i%2 !=0)
        cout<<endl;}
    }
    
}

int main(){
	ll t;
	cin >> t;
	while (t--){
        solve();
	}
}
