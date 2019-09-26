#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
    int i, j, k, temp, a, b, c, n;

    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>a>>b>>c;
        if(a>b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if(a>c)
        {
            temp = a;
            a = c;
            c = temp;
        }
        if(b>c)
        {
            temp = b;
            b = c;
            c = temp;
        }


        cout<<"Case "<<i+1<<": "<<a<<" "<<b<<" "<<c<<endl;
    }

    return 0;
}
