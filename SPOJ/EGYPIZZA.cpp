#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,h=0,q=0,q3=0,ans=0,a,b;
    cin>>t;
    while(t--)
    {
        float x;
        scanf("%d/%d",&a,&b);
        if(a==1&&b==2)
        h++;
        else if(a==3)
        q3++;
        else
        q++;
    }
    //cout<<h<<q3<<q<<endl;
    if(q3>=q)
    {
        ans=1+q3+ceil(h/2.0);
    }
    else
    {
        if(h%2==0)
        {
            ans=1+q3+h/2+(ceil((q-q3)/4.0));
        }
        else
        {
            ans=1+q3+(h/2)+(ceil((q-q3+2)/4.0));
        }
    }
    cout<<ans<<endl;
	// your code goes here
	return 0;
}
