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

        cin.getline(str, 10001);
        n = strlen(str);

        for(i = 0; i<n; i++)
        {
            if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'|| str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U')
            {
                cout<<str[i];
            }
        }

        cout<<endl;

        for(i = 0; i<n; i++)
        {

            if((str[i] >='A' && str[i] <= 'Z') || (str[i] >='a' && str[i] <= 'z'))
            {
                if(str[i] != 'a' && str[i] != 'e'&& str[i] != 'i'&& str[i] != 'o'&& str[i] != 'u'&& str[i] != 'A'&& str[i] != 'E'&& str[i] != 'I'&& str[i] != 'O'&& str[i] != 'U'&& str[i] != ' ')
                {
                    cout<<str[i];
                }
            }
        }

        cout<<endl;


    }
    return 0;
}
