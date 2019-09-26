#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, t, n, v, c, fc;
    cin>>t;

    while(t--)
    {
        cin>>n;
        c=0, fc=0;
        for(i = 2; i<=n; i++)
        {
            v = i;
           /* while (v % 2 == 0)
            {
                c++;
                v = v/2;
            }*/

            while(v%5==0)
            {
                fc++;
                v = v/5;
            }
            v = 0;
        }
        cout<<fc<<endl;
        /*if(c>=fc){
            cout<<fc<<endl;
        }
        else{
            cout<<0<<endl;
        }*/

    }

    return 0;

}
