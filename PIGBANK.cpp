#include <iostream>
 
using namespace std;
 

int p[501], w[501], m[10001];
 
int main()
{
  int t, n, e, f;
  int i,j;
  int tmp, tmp1;
 
  cin>>t;
 
  while(t--) {
    cin>>e>>f;
    cin>>n;
 
    tmp = 10000000;
 
    for(i=1;i<=n;i++) {
      cin>>p[i]>>w[i];
      tmp = min(tmp, w[i]);
    }
 
    for(i=0;i<tmp;i++) m[i]=0;
 
    for(i=tmp;i<=f-e;i++) {
      tmp = 10000000;
      for(j=1;j<=n;j++) {
	tmp1 = 0;
	if(i >= w[j])
	  if(m[i-w[j]] > 0 || i == w[j]) tmp1 = p[j] + m[i-w[j]];
	if(tmp1 < tmp && tmp1!=0) tmp = tmp1;
      }
 
      if(tmp==10000000) m[i] = 0;
      else m[i] = tmp;
    }
 
    if(!m[f-e])
      cout<<"This is impossible."<<endl;
    else
      cout<<"The minimum amount of money in the piggy-bank is "<<m[f-e]<<"."<<endl;
 
  }
 
  return 0;
}