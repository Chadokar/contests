#include<bits/stdc++.h>
using namespace std;
#define ll long long
int kyu = 0;
int l;
int digit(ll n){
    int r=0;
    while(n!=0){
        n=n/10;
        r++;
    }
    return r;
}

int maximum(ll n){
    ll r = 0;
    while(n!=0){
        r = max(r,n%10);
        n = n/10;
    }
    return r;
}

bool nonzero(ll n){
    bool *c;
    while(n!=0){
        if(n%10==0){
            (*c) = true;
            return true;
        }
    }
    (*c) = false;
    return false;
}

/*int newnumber(ll n,int i,int a[]){
    ll k = 1;
    ll x = n;
    while(n!=0){
        if((n%10)<(*min_element(a,a+i+1)) && n%10>1)
            k = max(k,n%10);
        n = n/10;
    }
    a[i+1]=k;
    if((nonzero(x*k) && i+1<(digit(x))) || (digit(x)<digit(x*k)))
        return newnumber(x,i+1,a);
    return k;
}
*/
int newnumbers(ll n,int i,int a[]){
    ll k = 1;
    ll x = n;
    while(n!=0){
        if((n%10)<(*min_element(a,a+i+1)) && n%10>1)
            k = max(k,n%10);
        n = n/10;
    }
    a[i+1]=k;
    if(digit(n*k)==l &&(nonzero(n*k)) && i+1<(digit(x)))
        return newnumbers(x,i+1,a);

    return k;
}

ll increase(ll n){
    int k = maximum(n);
    if(digit(n)==l &&!(nonzero(n)))
        return n;
    int a[20];
    ll x = n;
    if(k==1)
        return 0;
    if(digit(n*k) == digit(x)+1){
        kyu++;
        return n*k;
    }
    else if(maximum(n*k)!=1) {kyu++;return increase(n*k);}
    else while(1){
        kyu++;
        a[0] = maximum(n);
        k = newnumbers(n,0,a);
        if(digit(n*k)==digit(n)+1){
            return n*k;
        }

        else {
                return increase(n*k);
        }
    }
}

void solve(){
        ll x,xf;
        cin>>l>>x;
        xf = x;
        while(digit(x)!=l){
            x = increase(x);
            if(x==0 && digit(x)!=l){
                cout<<-1;
                return;
            }
            else if(x==0 && nonzero(x)){
                cout<<-1;
                return;
            }
        }
        //if(x<4 || digit(xf)+1==l)
        cout<<kyu;
        //else cout<<kyu-1;
        return;
}

int main(){
	int t;
	cin>>t;
	while(t--){
            kyu=0;
        solve();
        cout<<endl;
	}
}
