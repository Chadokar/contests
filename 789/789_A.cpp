#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=n+1, r =0;
        int *a = new int[n]; // 1 2 3 4 5 6 6 7 8 9 10 10
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]==0)
                {r++;}
            else if(a[i]==a[i+1])
                k=n;
        }
        if(r>0)
            cout<<n-r<<endl;
        else if(k==n)
            cout<<n<<endl;
        else cout<<n+1<<endl;

    }
}
