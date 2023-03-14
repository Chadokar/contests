#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool palindrome(int arr[], int n){
    // Initialise flag to zero.
    int flag = 0;

    // Loop till array size n/2.
    for (int i = 0; i <= n / 2 && n != 0; i++) {

        // Check if first and last element are different
        // Then set flag to 1.
        if (arr[i] != arr[n - i - 1]) {
            flag = 1;
            break;
        }
    }

    // If flag is set then print Not Palindrome
    // else print Palindrome.
    if (flag == 1)
        return false;
    else
        return true;
}

void f(int a[],int t,int k){
        a[1]+=t%10;
        a[0]+= a[1]/10;
        a[1]=a[1]%10;
        a[0]+=t/10;
        a[2] = k/10;
        a[3]=k%10;
}

int m(int a[]){
    return (a[2]*10) + a[3];
}

int h(int a[]){
    return (a[0]*10)+a[1];
}

void arr(int a[]){
    for(int i=0;i<4;i++)
        cout<<"a["<<i<<"] = "<<a[i]<<endl;

    return;
}

void solve(){
    int x,k,l=0;
    string s;
    cin>>s;
    cin>>x;
    int t = x/60,z=t;
    int r = x%60;
    int a[4];
    a[0] = s[0]-48;
    a[1]=s[1]-48;
    a[2]=s[3]-48;
    a[3]=s[4]-48;
    k = m(a),l = h(a);int y=0;
    while(l<24){
        k=0;
        if(palindrome(a,4)){
            y++;
        }
        //cout<<"h = "<<l<<endl;
        //cout<<"m = "<<k<<endl;
        //cout<<"r = "<<r<<endl;
        k = m(a);l = h(a);
        k = k+r;
        if(k>60){
            t++;
        }
        k = k%60;
        f(a,t,k);
        t=z;
        //arr(a);
    }
    cout<<y<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}

