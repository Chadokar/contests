#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

void solve(){
    int n;
    cin>>n;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    unordered_map<int,int>m;
    unordered_map<int,int>k;
    for(int i=0;i<n;i++){
        m[a[i]] = 1;
        k[a[i]] = 0;
    }
    for(int i=0;i<n;i++){
        k[b[i]] = 1;
        if(m.find(b[i]) == m.end())
        m[b[i]] = 0;
    }
    m[a[0]]=k[b[0]]=1;
    for(int i=1;i<n;i++){
        int x =0;
        int j=i;
        if(a[i-1] ==a[i])
        for(j=i;j<n;j++){
            if(a[i-1]==a[j])
            x++;
            else break;
        }
        if(x>0) x = x+1;
        // cout<<"x1 = "<<x<<endl;
        m[a[i]] = max(m[a[i]],x);
        i = j;
    }
    for(int i=1;i<n;i++){
        int x =0;
        int j=i;
        if(b[i-1] ==b[i])
        for(j=i;j<n;j++){
            if(b[i-1]==b[j])
            x++;
            else break;
        }
        if(x>0) x = x+1;
        // cout<<"x2 = "<<x<<endl;
        k[b[i]] = max(k[b[i]],x);
        // cout<<"k[b[i]]1 ="<<k[b[i]]<<" ,b[i] = "<<b[i]<<endl;
        i = j;
    }
    int e =0;
    for(int i=0;i<n;i++){
        e = max(e,m[a[i]]+k[a[i]]);
        // if(m[a[i]] == 1 && k[a[i]] ==1)
        // e = 1;
        // if((m[a[i]] == 1 && k[a[i]] ==0) || (m[a[i]] == 0 && k[a[i]] ==1))
        // e = 0;
        // cout<<"m[a[i]] = "<<m[a[i]]<<" ,k[a[i]] = "<<k[a[i]]<<" ,a[i] = "<<a[i]<<endl;
    }
    for(int i=0;i<n;i++){
        e = max(e,m[b[i]]+k[b[i]]);
        // if(m[b[i]] == 1 && k[b[i]] ==1)
        // e = 1;
        // if((m[b[i]] == 1 && k[b[i]] ==0) || (m[b[i]] == 0 && k[b[i]] ==1))
        // e = 0;
        // cout<<"m[b[i]] = "<<m[b[i]]<<" ,k[b[i]] = "<<k[b[i]]<<" ,b[i] = "<<b[i]<<endl;
    }
     cout<<e<<endl;

}

int main(){
	ll t;
	cin>>t;
	while(t--){
        solve();
	}
}

