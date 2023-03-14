#include<bits/stdc++.h>
using namespace std;


int maxAND(int a[], int n)
{

    int res = a[0];
    for (int i=1; i<n; i++){
        res &=a[i];
    }

    return res;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        int *p = new int [n];
        int *a = new int [n];
        for(int i=0;i<n;i++){
            cin>>p[i];
            a[i] = p[i];
        }
        sort(a,a+n);
        int r = 0;
        int *b = new int [n];
        for(int i=0;i<n;i++){
            if(p[i]!=a[i]){
                b[r]=p[i];
                r++;
            }
        }
        int *c = new int [r];
        for(int i=0;i<r;i++){
            c[i] = b[i];
        }
        sort(c,c+r);

        cout<<maxAND(b,r)<<endl;

	}
}
