#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, T, n, j, k;
    char S[1002], word[1002];

    cin>>T;
    cin.ignore();
    while(T--)
    {
        cin.getline(S, 1002);
        n = strlen(S);

        for(i = 0, k = 0; i<n; i++)
        {
            if(S[i]!=' '){
                word[k] = S[i];
                k++;
            }
            else if(k > 0){
                word[k] = '\0';
                cout<<word<<endl;
                k = 0;
            }

        }

    }



}
