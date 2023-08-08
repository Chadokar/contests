#include <bits/stdc++.h>

using namespace std;

#define ll long long
vector<ll>arr,prefix;
ll y = (pow(10,9) + 7);

int findRoot(int a,int b,int c){
    int d = b * b - 4 * a * c;
    int sqrt_val = sqrt(abs(d));
    return (-b + sqrt_val) / (2 * a);
}

int removeDuplicates(vector<int> &arr)
{
    int n = arr.size();
    if (n == 0 || n == 1)
        return n;
    vector<int>temp;
    int j = 0;
    
   
    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            temp.push_back(arr[i]);
    temp.push_back(arr[n - 1]);
    for (int i = 0; i < temp.size(); i++)
        arr[i] = temp[i];
 
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
    int r = removeDuplicates(v);
    for(int i=0;i<n-r;i++){
        cout<<v[r-1]<<" ";
    }
    for(int i=r-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}