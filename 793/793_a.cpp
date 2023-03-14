#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,k;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int k=0,m = n/2;
        bool c = false;
        if(n%2==0)
        c = true;
        k=1;int r=1;
        while(c){

            if(s[m]==s[m+k])
                r++;
            else if(s[m]!=s[m+k])
                break;
        k++;
        }
        r = r*2;
        if(c){
            cout<<r<<endl;
            continue;
        }
        r=0;k=1;
        while(!c){
            if(s[m]==s[m+k])
                r++;
            else if(s[m]!=s[m+k])
                break;
            k++;
        }
        r = (r*2) + 1;
        cout<<r<<endl;
	}
}
