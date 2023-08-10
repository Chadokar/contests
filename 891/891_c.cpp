#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

int remRep(vector<int> &v){
    int n = v.size();
    if (n == 0 || n == 1)
        return n;
    vector<int>temp;
    int j = 0;
    
   
    for (int i = 0; i < n - 1; i++)
        if (v[i] != v[i + 1])
            temp.push_back(v[i]);
    temp.push_back(v[n - 1]);
    for (int i = 0; i < temp.size(); i++)
        v[i] = temp[i];
 
    return temp.size();
}

void solve(){
    int n;
    cin >> n;
    int s = (n*(n-1))/2;
    vector<int>v;
    for(int i=0; i<s; i++){
        int a;cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    n = n-1;
    int k=0;
    for(int i =n;i>0;i--){
        cout<<v[k]<<" ";
        k+=n;
        n--;
    }
    cout<<v[s-1]<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}