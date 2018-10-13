#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,d,m,x;
    cin>>a>>d;
    while(a!=0&&d!=0)
    {
        int ans=0;
        m=10001;
        for(int i=0;i<a;i++)
        {
            cin>>x;
            m=min(m,x);
        }
        for(int i=0;i<d;i++)
        {
            cin>>x;
            if(x<=m)
            ans++;
        }
        if(ans<2)
        cout<<"Y"<<endl;
        else
        cout<<"N"<<endl;
        cin>>a>>d;
    }
    return 0;
}