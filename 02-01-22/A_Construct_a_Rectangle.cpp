#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>

int main(){
    int t,l1,l2,l3,i,j;
    cin>>t;
    while(t--){
            cin>>l1>>l2>>l3;

            if(l1==l2&& l3%2==0)
            cout<<"Yes"<<endl;

            else if(l2==l3 && l1%2==0)
            cout<<"Yes"<<endl;

            else if(l1==l3 && l2%2==0)
                cout<<"Yes"<<endl;

            else if((l1+l2)==l3 || (l2+l3)==l1 || (l1+l3)==l2)
                cout<<"Yes"<<endl;

            else cout<<"No"<<endl;

    }
    return 0;
}
