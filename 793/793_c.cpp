#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        ll *a = new ll[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int r=0;
        sort(a,a+n);
        for(int i=0;i<n-1;i++){                  //
            if(a[i]<a[i+1]){
                r++;
            }
        }


	}
}
