#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, t, n, c;

    cin>>t;

    while(t--){
        char str[10001], ch;
        c = 0;
        cin.ignore();
        cin.getline(str, 10001);
        cin.get(ch);
        n = strlen(str);
        for(i = 0; i<n; i++)
        {
            if(str[i]==ch){
                c++;
            }
        }
        if(c!=0){
            printf("Occurrence of '%c' in '%s' = %d\n", ch, str, c);
            }
        else{
            printf("'%c' is not present\n",ch);
        }

    }
    return 0;
}
