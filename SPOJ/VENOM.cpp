#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int h,a,p,x,y,z;
        int ans;
        scanf("%d%d%d",&h,&p,&a);
        y=3*p-2*a;
        z=2*(p-h);
        ans=ceil(((-y)+sqrt(y*y-4*p*z))/(2*p));
        if(ans<0)
        ans=0;
        printf("%d\n",2*ans+1);
    }
	// your code goes here
	return 0;
}
