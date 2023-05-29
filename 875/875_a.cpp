#include<bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

void solve(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; ){
        int x;
        cin >> x;
        v.push_back(x);
        i++;
    }
    vector<int> a;
    vector<int> b;
    a = vector<int>(v.begin(), v.end());
    sort(a.begin(), a.end());
    int m = a[n-1] + v[n-1];
    b.push_back(a[n-1]);
    a.pop_back();
    int i = n-2;
    while (!a.empty() && i >= 0) {
        int l = a.size();
        if (a[l-1] + v[i] <= m){
            b.push_back(a[l-1]);
            a.pop_back();
        }
        else{
            l = a.size();
            for (int j = l-1; j >= 0; j--){
                if (a[j] + v[i] <= m){
                    b.push_back(a[j]);
                    int k = a[l-1];
                    a[l-1] = a[j];
                    a[j] = k;
                    a.pop_back();
                    sort(a.begin(), a.end());
                    break;
                }
            }
        }
        i--;
    }
    for (int i = n-1; i >= 0; i--){
        cout << b[i] << " ";
    }
    cout << endl;
}

int main(){
	ll t;
	cin >> t;
	while (t--){
        solve();
	}
}
