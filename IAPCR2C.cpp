#include <bits/stdc++.h>
using namespace std;
int n;
void check(int arr[],int x)
{
    if(x<=n&&x>=1)
    {
        arr[x]=1;
        //cout<<x<<endl;
    }
}
int main() {
    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
        int m,x,ans=0;;
        scanf("%d %d",&n,&m);
        int arr[1000002]={0};
        for(int i=0;i<m;i++)
        {
            scanf("%d",&x);
            check(arr,x);
            check(arr,x-1);
            check(arr,x+1);
        }
        for(int i=1;i<=n;i++)
        {
            if(arr[i])
            {
                ans++;
            }
        }
        printf("Case %d: %d\n",j,ans);
    }
	// your code goes here
	return 0;
}
