#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int m,n;
        cin>>n;
        int *a = new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>m;
        int *b = new int[m];
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        int k,l;
        k = *max_element(a,a+n);
        l = *max_element(b,b+m);
        if(k==l){
            cout<<"Alice"<<endl;
            cout<<"Bob"<<endl;
        }
        else if(k>l){
            cout<<"Alice"<<endl;
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
            cout<<"Bob"<<endl;
        }


	}
}
