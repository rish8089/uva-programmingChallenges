#include <bits/stdc++.h>
using namespace std;
int X[]={-1,0,0,1,1,-1,1,-1};
int Y[]={0,1,-1,0,1,-1,-1,1};
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    for(int l=1;;l++)
    {
        int n,m;
        cin>>n>>m;
        if(n==0 && m==0)
            break;

        string field[n];
        for(int i=0;i<n;i++)
            cin>>field[i];
        int output[n][m];
        memset(output,0,sizeof(output));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(field[i][j]=='*')
                {
                    for(int k=0;k<8;k++)
                    {
                        if(i+X[k]>=0 && i+X[k]<n && j+Y[k]>=0 && j+Y[k]<m)
                        {
                            output[i+X[k]][j+Y[k]]+=1;
                        }
                    }
                }
            }
        }

        if(l>1)
            cout<<endl;
        cout<<"Field #"<<l<<":"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(field[i][j]=='*')
                    cout<<field[i][j];
                else
                    cout<<output[i][j];
            }
            cout<<endl;
        }


    }
}
