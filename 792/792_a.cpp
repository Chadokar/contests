#include<bits/stdc++.h>
#include<math.h>
using namespace std;
string s[100];

main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int a[10];
        int i=0;
        while(n!=0){
            a[i++] = n%10;
            n = n/10;
        }
        n=i;

        if(n==2){
            cout<<a[0]<<endl;
            continue;
        }
        else cout<<*min_element(a,a+n)<<endl;

    }
    return 0;
}
