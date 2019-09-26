#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>

using namespace std;

int main()
{
    int i, t, num, sq_root;

    cin>>t;
    for(i = 0; i<t; i++){
        cin>>num;

        sq_root = sqrt(num);

        if(sq_root * sq_root == num){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }

    return 0;


}
