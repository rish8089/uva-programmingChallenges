//very poor quality question
//in the question they are not telling that a party starts strike from which day
//so if a political party has h factor equal to 2, so it will start strike from day 2
//so if we generalize, then a political party starts strike from h[i] day and then continue like that.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        int h[p];
        for(int i=0;i<p;i++)
            cin>>h[i];

        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(i%7==6 || i%7==0)
                continue;

            bool flag=false;
            for(int j=0;j<p;j++)
            {
                if(i%h[j]==0)
                {
                    flag=true;
                    break;
                }
            }
            if(flag)
                cnt++;
        }

        cout<<cnt<<endl;

    }
}
