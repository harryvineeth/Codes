#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp,c=0,i,j;
        cin>>n;
        int arr[1000]={0};
        temp=n;
       for(i=0;temp;i++)
       {
           arr[i]=temp%3;
           temp=temp/3;
       }
       //reverse(arr,arr+i-1);
       
       //for(j=1;j<i;j++)cout<<arr[j];cout<<endl;
       for(j=1;1;j++)
       {
           if(j>=i&&arr[j]==0)
           break;
           arr[j+1]+=arr[j]/3;
           arr[j]=arr[j]%3;
           if(arr[j]==2)
           {
               //cout<<j<<endl;
               arr[j+1]++;
               arr[j]=-1;
           }
       }
       //cout<<j<<endl;
       reverse(arr,arr+j);
       for(i=0;i<j;i++)
       {
           if(arr[i]==1)
           cout<<"+";
           else if(arr[i]==-1)
           cout<<"-";
           else if(arr[i]==0)
           cout<<"0";
       }
       cout<<endl;
        
    }
	// your code goes here
	return 0;
}
