#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>

/*{ Input 5
1,2,3,4,5
1 -> 1
2 -> 1,2
3 -> 1,2,3
4 -> 1,2,3,4
5 -> 1,2,3,4,5}
*/
bool checksq(const int *i){
    return isdigit(sqrt((*i)));
}
int main(){
    int n,i,k=1,t=0;
    cin>>n;
    i=1;
    for(int j=2;j<=n;j++){
        int *arr = new int [k];
        if((n-j)%2==0){
            arr[t++]=j;
            k++;
        }
        else if( checksq(&i)==true){
            arr[t++]=i;
            k++;
        }
    }
    while(i<=n){

        for(int j=1;j<=i;j++)
        {
            if( checksq(&i)==true)
            arr[t]=i;

        }
    }
}
