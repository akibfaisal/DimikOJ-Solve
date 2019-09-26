#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,a,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        if(a%2==0)
        {
            cout<<"even\n";
        }
        else
            cout<<"odd\n";
    }



    return 0;
}
