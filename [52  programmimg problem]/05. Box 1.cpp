#include<iostream>

using namespace std;

int main()
{
    int t,n,i,j,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=n;k++)
            {
                cout<<"*";
            }
                cout<<endl;
        }
        if(i!=t){
            cout<<endl;
        }
    }

    return 0;
}
