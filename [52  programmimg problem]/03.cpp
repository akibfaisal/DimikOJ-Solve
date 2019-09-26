#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n=1000, i;
    for(i=n;i>=1;i--)
    {
        if(i%5==0&&i!=1000){
            cout<<endl;
            cout<<i<<"\t";
        }
        else{
            cout<<i<<"\t";
        }
    }

    cout<<endl;


    return 0;
}
