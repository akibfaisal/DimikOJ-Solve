#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, t, n, c;

    cin>>t;
    cin.ignore();
    while(t--)
    {
        char str[1001], rev[1001];
        int c = 0, f;

        cin.getline(str, 1001);
        n = strlen(str);

        for(i = 0; i<=n; i++)
        {
            if(str[i] == ' ' || i == n)
            {
                f = c;
                for(j=i-1; j>=f; j--){
                    rev[c]=str[j];
                    c++;
                }
                rev[c]=str[i];
                c++;
            }
        }


        rev[c] = '\0';
        cout<<rev<<endl;


    }
    return 0;
}
