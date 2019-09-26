#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int n,a,i;
    char t[101];
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%s",t);
        a=strlen(t);
        if(t[a-1]%2==0)
        {
            cout<<"even\n";
        }
        else
            cout<<"odd\n";
    }

    return 0;
}
