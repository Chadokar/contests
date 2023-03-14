#include<bits/stdc++.h>
#include<math.h>
using namespace std;
string s[100];
typedef long long int ll;
main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        ll x,y,z;
        x = a+b+c;
        y = b+c;
        z = c;
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    return 0;
}
