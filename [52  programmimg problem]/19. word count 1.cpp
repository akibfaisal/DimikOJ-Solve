#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, t, n, c;

    cin>>t;
    cin.ignore();
    while(t--)
    {
        char str[10001];
        int c = 0, f=1;

        cin.getline(str, 10001);
        n = strlen(str);

        for(i = 0; i<n; i++)
        {
            if(str[i] == ' ' && str[i+1] > ' ')
            {
                c++;
            }
            if(str[0]==' ')
            {
                f=0;
            }

        }

        cout<<"Count = "<<c+f<<endl;


    }
    return 0;
}
