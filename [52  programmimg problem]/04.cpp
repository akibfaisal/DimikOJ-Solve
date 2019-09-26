#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int T,n,i,j;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>n;
        cout<<"Case "<<i<<":";
        for(j=1;j<=n;j++)
        {
            if(n%j==0)
            {
                cout<<' '<<j;
            }
        }
        cout<<'\n';
    }



    return 0;
}
