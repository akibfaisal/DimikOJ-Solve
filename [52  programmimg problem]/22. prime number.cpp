#include<bits/stdc++.h>

using namespace std;

const int size = 100001;
int ara[size];

void sieve(){
    int i, j, root;

    for(i = 2; i < size; i++)
    {
        ara[i] = 1;
    }

    root = sqrt(size);

    for(i = 2; i <= root; i++)
    {
        if(ara[i] == 1)
        {
            for(j = 2; i * j <= size; j++)
            {
                ara[i * j] = 0;
            }

        }
    }
}

int main()
{
    int i, t, n, a, b;

    sieve(); //calling sieve fun. early to save time

    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        int count = 0;
        for(i = a; i <= b; i++){
            if(ara[i] == 1){
                count++;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}
