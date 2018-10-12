#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long a,b,c;
        cin>>a;
        a=sqrt(a+1)-1;
        {
            cout<<"Case "<<i<<": "<<a<<endl;
        }
        
    }
	// your code goes here
	return 0;
}
