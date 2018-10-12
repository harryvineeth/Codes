#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    scanf("%d",&t);
    while(t--)
        {
        int n,ans=0,i,j;
        scanf("%d",&n);
        char s[2*n];
        cin>>s;
        vector<char>v;
        vector<char>v1;
        for(i=0;i<2*n-2;i+=2)
            v.push_back(s[i]);
        for( i=1;i<2*n-2;i+=2)
            v1.push_back(tolower(s[i]));
        for(i=0;i<v1.size();i++)
            {
            for( j=0;j<=i;j++)
                {
                if(v[j]==v1[i])
                    {
                    //cout<<v[j]<<v1[i]<<j<<i<<endl;
                    v[j]='@';
                    break;
                }
                //cout<<i<<j<<" ,"<<endl;
            }
            if(j>i)
            ans++;//cout<<i<<j<<endl;
        }
        printf("%d\n",ans);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
