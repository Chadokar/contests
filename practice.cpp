// C++ program to find LCM of two numbers
#include <iostream>
using namespace std;

// Recursive function to return gcd of a and b
long long gcd(long long int a, long long int b)
{
if (b == 0)
	return a;
return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}

// Driver program to test above function
int main()
{
    int a = 'a';
    cout<<a;

}

        for(int i=0;i<n;i++){
            b[i]=a[i];
        }
        sort(b,b+n);
        bool c = true;
        int r=0;
        for(int i=0;i<n;i++){
            while(a[i]>b[i] || (a[i]>=b[i+1] && i+1<n)){
                a[i]=a[i]/2;
                r++;
                if((a[i]==0 && a[i+1]==0 && i+1<n)|| (i>0 &&a[i-1]==0 && a[i]==0)){
                    r = 0;
                    c = false;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<"b["<<i<<"] = "<<b[i]<<endl;
        }
        cout<<endl;

        for(int i=0;i<n-1;i++){
            while(a[i]>=a[i+1]){
                a[i]=a[i]/2;
                r++;
                cout<<"a["<<i<<"] = "<<a[i]<<endl;
                if((a[i]==0 && a[i+1]==0)|| (i>0 &&a[i-1]==0 && a[i]==0)){
                    c = false;
                    cout<<"fuck"<<endl;
                    break;
                }
            }

        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<"a["<<i<<"] = "<<a[i]<<endl;
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                c = false;
                break;
            }
        }
        if(c)
        cout<<r<<endl;
        else cout<<-1<<endl;



/*int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d,count=1;
        cin>>n>>d;
        for(int i=0;i<d;i++){
                if(i<10) count*=2;
                else count*=3;
                if(count>n){
                    count=n;
                    break;
                }
        }
        cout<<count<<endl;
    }
}*/
/*int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d,count=1;
        cin>>n>>d;
        if(d<=10){
                int tmp=(int)pow(2,d);
                count=(tmp<n)?tmp:n;
        }else{
            int tmp=(int)pow(2,10)*(int)pow(3,d-10);
            count=(tmp<n)?tmp:n;
        }
        cout<<count<<endl;
    }
}
*/
