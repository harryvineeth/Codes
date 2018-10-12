#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,b,fun,bud;
    
   while(1)
   {
       scanf("%d%d",&b,&n);
       if(b==0&&n==0)
       break;
      int fun[n+1],bud[n+1];
      for(int i=0;i<n;i++)
      {
          scanf("%d%d",&bud[i],&fun[i]);
      }
      int kp[n+1][b+1],cost=0;
      for(int i=0;i<=n;i++)
      {
          for(int j=0;j<=b;j++)
          {
              if(i==0||j==0)
              kp[i][j]=0;
              else if(bud[i-1]<=j)
              {
                  kp[i][j]=max(kp[i-1][j],fun[i-1]+kp[i-1][j-bud[i-1]]);
              }
              else
              kp[i][j]=kp[i-1][j];
          }
      }
      int ma=kp[n][b];
      cost=b;
      while(cost)
      {
          if(kp[n][cost]<ma)
          break;
          cost--;
      }
      cout<<cost+1<<" "<<kp[n][b]<<endl;
   }
	// your code goes here
	return 0;
}
