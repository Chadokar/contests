#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>
#include<algorithm> // sort fuction is available
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        s = s.substr(0,-1);
        cout<<s;
    }
}
