#include <bits/stdc++.h>
using namespace std;
long long  gcd(long long a,long long b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long a,b,c,d,num,den,x;
        cin>>a>>b>>c>>d;
        num=a*(c+1)+b*(d+1);
        den=(a+b)*(c+d+1);
        if(num==0)cout<<"Case "<<i<<": "<<"0"<<endl;
        else{
        x=gcd(num,den);
        num/=x;
        den/=x;
        cout<<"Case "<<i<<": "<<num<<"/"<<den<<endl;
        }
        
    }
	// your code goes here
	return 0;
}
