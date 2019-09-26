#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main()
{
    double teamA, teamB, ball_left, ball_played, run_req,crr, rr;
    int i,t;

    cin>>t;
    for(i = 0; i<t; i++)
    {

        cin>>teamA>>teamB>>ball_left;

        ball_played = 300 - ball_left;
        crr = (teamB/ball_played)*6;
        run_req = teamA+1-teamB;
        if(teamA-teamB<0)
        {
            rr = 0.00;
        }
        else
        {
            rr = (run_req/ball_left)*6;
        }

        cout<<fixed<<setprecision(2)<<crr<<" "<<rr<<endl;
        //printf("%.2lf %.2lf\n",crr, rr);

    }

    return 0;

}
