#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;


int main(){
    float g,b,ans;
    cin>>g>>b;
    while(g!=-1)
    {if(g>b)
    ans=ceil(g/(b+1));
    else
    ans=ceil(b/(g+1));
    cout<<ans<<endl;
    cin>>g>>b;
}
    return 0;
}