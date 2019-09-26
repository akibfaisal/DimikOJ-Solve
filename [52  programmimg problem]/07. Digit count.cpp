#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
int main()
{

    char *p, *e;
    long input;
    int i, n, c;

    cin>>n;
    cin.ignore();
    for(i=0; i<n; i++)
    {
        char line[1000000];
        cin.getline(line,1000000);
        p = line;
        c = 0;

        for(p = line; ; p = e)
        {
            input = strtol(p, &e, 10);
            if(p == e)
            {
                break;
            }
            c++;
        }

        cout<<c<<endl;
    }

    return 0;
}
