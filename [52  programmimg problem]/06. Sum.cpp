#include<iostream>
#include<cstdio>

using namespace std;
int main()
{
    int n,i,j,a,p,q,r,s,sum;
    cin>>n;
    for(i=0; i<n; i++)
    {
        q=-1;
        cin>>a;
        p=a%10;
        for(;q!=0;)
        {
            q=a/10;
            r=a%10;
            //cout<<r<<endl;
            a=q;

        }

        //cout<<r<<endl;
        sum=p+r;
        cout<<"Sum"<<" = "<<sum<<endl;
    }
    return 0;
}
