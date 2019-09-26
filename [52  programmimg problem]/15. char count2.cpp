#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, t, n, c;

    cin>>t;
    cin.ignore();
    while(t--)
    {
        char str[1001];
        int k[26] = {};

        cin.getline(str, 1001);
        n = strlen(str);

        for(i = 0; i<n; i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                k[str[i]-'a']++;
            }
        }

        for(i = 0; i<26; i++)
        {
            if(k[i]!=0)
            {
                char x='a'+i;
                cout<<x<<" = "<<k[i]<<endl;
            }
        }

        if(t>0)
        cout<<endl;
    }
    return 0;
}
