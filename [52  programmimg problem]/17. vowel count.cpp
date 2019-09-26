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
        int c = 0;

        cin.getline(str, 1001);
        n = strlen(str);

        for(i = 0; i<n; i++)
        {
            if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'|| str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U')
            {
                c++;
            }
        }

        cout<<"Number of vowels = "<<c<<endl;


    }
    return 0;
}
