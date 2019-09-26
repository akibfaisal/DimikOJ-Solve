#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }


}

int main()
{
    int t,n,p;

    cin>>t;

    while(t--){
        cin>>n;
        p=fact(n);
        cout<<p<<endl;
    }

    return 0;

}
