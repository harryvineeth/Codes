#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,i,sum=0;
        cin>>n;
        vector<int>m;
        vector<int>w;
        for(i=0;i<n;i++)
        {
           cin>>x;
           m.push_back(x);
        }
        for(i=0;i<n;i++)
        {
           cin>>x;
           w.push_back(x);
        }
        sort(w.begin(),w.end());
        sort(m.begin(),m.end());
        for(i=0;i<n;i++)
        {
            sum+=m[i]*w[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}