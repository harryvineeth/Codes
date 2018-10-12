#include <bits/stdc++.h>
#define PI 3.14159265
using namespace std;
int main() {
    float d,x,y,th,ans=1,prev=0;
    while(scanf(\"%f%f%f%f\",&d,&x,&y,&th)!=-1)
    {
        ans=(d-y)/(sin((th/2)*PI/180));
        printf(\"%2f\\n\",ans+x);
    }
	// your code goes here
	return 0;
}
