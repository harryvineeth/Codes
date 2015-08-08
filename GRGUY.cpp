#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t,i;
    cin>>t;
    while(t--)
    {
        char a[200009],b[200009];
        cin>>a>>b;

        int ans=0,flag=0,ans1=0;
        long len1,len2;
        len1=strlen(a);
        int arr[len1],arr1[len1];
        for(i=0;i<len1;i++)
        {
            if(a[i]==b[i]&&a[i]=='#')
            flag=1;
        }
        if(flag)
        {
            cout<<"No"<<endl;
            continue;
        }
        if(a[0]=='.'&&b[0]!='.')
            arr[0]=0;
        else if(a[0]!='.'&&b[0]=='.')
            arr[0]=1;
        else if(a[0]=='.')
        {
            for(i=1;i<len1;i++)
            {
                if(a[i]=='#')
                {
                    arr[0]=1;
                    break;
                }
                else if(b[i]=='#')
                {
                    arr[0]=0;
                    break;
                }

            }
        }
        for(i=1;i<len1;i++)
        {
            if(arr[i-1]==0)
            {
                if(a[i]=='.')
                arr[i]=0;
                else
                arr[i]=1;
            }
            if(arr[i-1]==1)
            {
                if(b[i]=='.')
                arr[i]=1;
                else
                arr[i]=0;
            }
        }
        /*if(a[0]=='.'&&b[0]=='.')
        {
            arr1[0]=1;
            for(i=1;i<len1;i++)
        {
            if(arr1[i-1]==0)
            {
                if(a[i]=='.')
                arr1[i]=0;
                else
                arr1[i]=1;
            }
            if(arr1[i-1]==1)
            {
                if(b[i]=='.')
                arr1[i]=1;
                else
                arr1[i]=0;
            }
        }
        }*/
        for(i=1;i<len1;i++)
        {
            //cout<<arr[i]<<" "<<arr1[i]<<endl;
            if(arr[i]!=arr[i-1])
            ans++;
            //if(arr1[i]!=arr1[i-1])
            //ans1++;
        }
        cout<<"Yes"<<endl<<ans<<endl;
    }
	// your code goes here
	return 0;
}
