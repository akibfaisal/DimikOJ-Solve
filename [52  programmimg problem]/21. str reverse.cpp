#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, t, n;

    cin>>t;
    cin.ignore();
    while(t--)
    {
        char str[1001];
        cin.getline(str,1001);
        n = strlen(str);
        for(i = n-1; i>=0; i--)
        {
            cout<<str[i];
        }

        cout<<endl;
    }

    return 0;
}
