#include<bits/stdc++.h>
using namespace std;
long long a[100003];
pair<long long ,long long> tree[400003];
void create(long long ss,long long se,long long node)
{
    if(ss==se)
        {
            tree[node].first=a[ss];
            tree[node].second=-1;
        }
    else
    {
        create(ss,(ss+se)/2,2*node);
        create((ss+se)/2+1,se,2*node+1);
        tree[node].first=max(tree[2*node].first,tree[2*node+1].first);
        tree[node].second=max(min(tree[2*node].first,tree[2*node+1].first),max(tree[2*node].second,tree[2*node+1].second));
    }
}
pair<long long,long long> querry(long long ss,long long se,long long node,long long beg,long long end)
{
    if(ss>end or se<beg)
        return make_pair(-1,-1);
    if(ss>=beg and se<=end)
        return tree[node];
    pair<long long,long long> a=querry(ss,(ss+se)/2,2*node,beg,end);
    pair<long long,long long> b=querry((ss+se)/2+1,se,2*node+1,beg,end);
    pair<long long,long long> c;
    c.first=max(a.first,b.first);
    c.second=max(min(a.first,b.first),max(a.second,b.second));
    return c;
 
}
void update(long long ss,long long se,long long node,long long i,long long x)
{
    if(i<ss or i>se)
        return ;
    if(ss==se)
    {
        tree[node].first=x;
        return ;
    }
    update(ss,(ss+se)/2,2*node,i,x);
    update((ss+se)/2+1,se,2*node+1,i,x);
    tree[node].first=max(tree[2*node].first,tree[2*node+1].first);
    tree[node].second=max(min(tree[2*node].first,tree[2*node+1].first),max(tree[2*node].second,tree[2*node+1].second));
 
}
int main()
{
    long long n;
    scanf("%lld",&n);
    for(long long i=1;i<=n;++i)
        scanf("%lld",&a[i]);
    create(1,n,1);
    long long q;
    scanf("%lld",&q);
    char ch;
    long long x,y;
    pair<long long,long long> ans;
    while(q--)
    {
        cin>>ch;
        scanf("%lld %lld",&x,&y);
        if(ch=='U')
            update(1,n,1,x,y);
        else
        {
            ans=querry(1,n,1,x,y);
            printf("%lld\n",ans.first+ans.second);
        }
    }
    return 0;
}
