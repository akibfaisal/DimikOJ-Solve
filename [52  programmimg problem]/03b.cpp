#include <iostream>
using namespace std;

int main ()
{
    int test_case, i;
    cin >> test_case;

    for ( i = 0; i < test_case; i++)
    {
        int n;
        cin >> n;
        //cout << endl;
        for ( int i = 0; i < n; i++)
        {
            for ( int j = 0; j < n; j++)
                cout << "*";
            cout << endl;
        }
        if ( i == test_case -1 )
            break;
        else
            cout << endl;
    }
   // cout << endl;
}
