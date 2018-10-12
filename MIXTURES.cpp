#include <bits/stdc++.h>
using namespace std;
int dp[101][101];
int sum(int arr[],int a,int b)
{
    int su=0;
    for(int i=a;i<=b;i++)
    {
        su=(su+arr[i])%100;
    }
    return su%100; 
}
int solve(int arr[],int a,int b)
{
    if(dp[a][b]!=-1);
    return dp[a][b];
    if(a==b)
    return 0;
    if(a+1==b)
    return arr[a]*arr[b];
    dp[a][b]=INT_MAX;
    for(int i=a;i<b;i++)
    {
        dp[a][b]=min(dp[a][b],solve(arr,a,i)+solve(arr,i+1,b)+sum(arr,a,i)*sum(arr,i+1,b));
    }
    //dp[a][b]=mi;
    return dp[a][b];
}
int main() {
    int n;
   while(scanf("%d",&n)==1)
   {
       int a[n+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int l=2;l<=n;l++)
   {
       for(int i=1;i<=n-l+1;i++)
       {
           int j=i+l-1;
           dp[i][j]=INT_MAX;
           for(int k=i;k<=j-1;k++)
           {
               int temp=dp[i][k]+dp[k+1][j]+sum(a,i,k)*sum(a,k+1,j);
               if(temp<dp[i][j])
               dp[i][j]=temp;
           }
       }
   }
   cout<<dp[1][n]<<endl;
   }
   
	// your code goes here
	return 0;
}
