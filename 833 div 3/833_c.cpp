#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

vector<int> marks(vector<int> &v, int t){
    sort(v.begin(),v.end());
    int r =0;
    int i =0;
    int k = 0;
    for(i=0;i<v.size() && k+v[i]<=t;i++){
        r = (r + v[i]) + r;
        k = k + v[i];
    }
    vector<int> c {i, r};
    return c;
}

bool compare(const std::vector<int>& v1, const std::vector<int>& v2) {
    // cout<<"1 : "<<v1[0]<<" "<<v1[1]<<endl;
    if (v1[0] < v2[0]) {
        return false;
    } else if (v1[0] > v2[0]) {
        return true;
    } else {
        return v1[1] < v2[1];
    }
}

void solve(){
    int n,m,h;
    cin>>n>>m>>h;
    vector<int> s;
    vector<vector <int>> a;
    for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<m;j++){
            int r;
            cin>>r;
            v.push_back(r);
        }
        if(i ==0){
            s = marks(v,h);
        }
        a.push_back(marks(v,h));
    }

    for(int i=0;i<a.size();i++){
        cout<<"m1 = "<<a[i][0]<<" ,p1 = "<<a[i][1]<<endl;
        // cout<<"m1 = "<<s[0]<<" ,p1 = "<<s[1]<<endl;
    }
    sort(a.begin(),a.end(),compare);
    for(int i=0;i<a.size();i++){
        // cout<<"m = "<<a[i][0]<<" ,p = "<<a[i][1]<<endl;
        // cout<<"m1 = "<<s[0]<<" ,p1 = "<<s[1]<<endl;
        if(s[0] ==a[i][0] && s[1] == a[i][1]){
            cout<<i+1<<endl;
            return;
        }
    }
}

int main(){
	ll t;
	cin >> t;
	while (t--){
        solve();
	}
}
