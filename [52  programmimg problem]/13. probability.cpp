#include<bits/stdc++.h>

using namespace std;

int fact(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main()
{
    int i, j=0, t, n, c, p, q, res;

    cin>>t;
    cin.ignore();
    while(t--)
    {
        char str[1000];
        int c = 0, f=0;
        int chk[10] = {0};
        char tok[100][200];

        cin.getline(str, 1000);
        n = strlen(str);

        char* token = strtok(str, " ");

        while(token != NULL)
        {
            strcpy(tok[c],token);

            if(strlen(token) > 0)
            {
                c++;
            }

            for(j = 0; j<c; j++)
            {
                if(strcmp(tok[j],token) == 0){
                    chk[j]++;
                    if(chk[j]>1){
                        break;
                    }
                }
            }
            token = strtok(NULL, " ");
        }



        for(j = 0, q = 1; j<c; j++)
        {
            if(chk[j]>1){
            q = q*fact(chk[j]);
            }
        }

        p = fact(c);

        res = p/q;

        cout<<1<<"/"<<res<<endl;
    }
    return 0;
}
