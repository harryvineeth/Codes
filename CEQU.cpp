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
        cin>>a>>b>>c;
        if(c%(gcd(abs(a),abs(b)))==0)
        {
            cout<<"Case "<<i<<": Yes"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": No"<<endl;
        }
        
    }
	// your code goes here
	return 0;
}
