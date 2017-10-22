#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double mw,mi,tw,ti,extra=0,dif,m;
    cin>>mw>>mi>>tw>>ti;
    while(mw+mi>0)
    {
        dif=mw*tw*4.19-(abs(mi*ti*2.09));
        if(dif>0)
        {
            extra=dif-mi*335;
            if(extra==0)
            {
               printf("0.0 g of ice and %.1lf g of water at 0.0 C\n",mi+mw);
            }
            else if(extra>0)
            {
                tw=extra/((mi+mw)*4.19);
                printf("0.0 g of ice and %.1lf g of water at %.1lf C\n",mi+mw,tw);
            }
            else
            {
                m=mi-dif/335;
                printf("%.1lf g of ice and %.1lf g of water at 0.0 C\n",m,mw+mi-m);
            }
        }
        else if(dif==0)
        {
            printf("%.1lf g of ice and %.1lf g of water at 0.0 C\n",mi,mw);
        }
        else
        {
            extra=abs(dif)-(mw*335);
            if(extra==0)
            {
                printf("%.1lf g of ice and 0.0 g of water at 0.0 C\n",mi+mw);
            }
            else if(extra>0)
            {
                tw=extra/((mi+mw)*(2.09));
                printf("%.1lf g of ice and 0.0 g of water at -%.1lf C\n",mi+mw,tw);
            }
            else
            {
                m=mw+dif/335;
                printf("%.1lf g of ice and %.1lf g of water at 0.0 C\n",mi+mw-m,m);
            }
        }
        cin>>mw>>mi>>tw>>ti;
    }
	// your code goes here
	return 0;
}
