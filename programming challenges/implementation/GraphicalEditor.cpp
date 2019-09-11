//things to remember
//swap x and y if not in proper order
#include <bits/stdc++.h>
using namespace std;
#define lim 255
int adjX[]={-1,0,0,1};
int adjY[]={0,1,-1,0};
void rec(int x,int y,char mat[][lim],int m,int n,char col,bool visited[][lim])
{
    for(int i=0;i<4;i++)
    {
        if(x+adjX[i]<m && x+adjX[i]>=0 && y+adjY[i]>=0 && y+adjY[i]<n && !visited[y+adjY[i]][x+adjX[i]])
        {
            visited[y+adjY[i]][x+adjX[i]]=1;
            if(mat[y][x]==mat[y+adjY[i]][x+adjX[i]])
               rec(x+adjX[i],y+adjY[i],mat,m,n,col,visited);
        }
    }
    mat[y][x]=col;
}
int main()
{
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
        char mat[lim][lim];
        bool visited[lim][lim];
        while(true)
        {
            char c;
            int m,n,x1,y1,x2,y2;
            char col;
            cin>>c;
            if(c=='X')
                break;

            else if(c=='I')
            {
                cin>>m>>n;
                memset(mat,'O',sizeof(mat));
            }
            else if(c=='C')
                memset(mat,'O',sizeof(mat));
            else if(c=='L')
            {
                cin>>x1>>y1>>col;
                if(x1>=1 && x1<=m && y1>=1 && y1<=n)
                    mat[y1-1][x1-1]=col;
            }
            else if(c=='V')
            {
                cin>>x1>>y1>>y2>>col;
                if(y1>y2)
                    swap(y1,y2);
                if(x1>=1 && x1<=m && y1>=1 && y1<=n && y2>=1 && y2<=n)
                {
                    for(int i=y1-1;i<=y2-1;i++)
                      mat[i][x1-1]=col;
                }
            }
            else if(c=='H')
            {
                cin>>x1>>x2>>y1>>col;
                if(x1>x2)
                    swap(x1,x2);
                if(x1>=1 && x1<=m && x2>=1 && x2<=m && y1>=1 && y1<=n)
                {
                  for(int i=x1-1;i<=x2-1;i++)
                    mat[y1-1][i]=col;
                }
            }
            else if(c=='K')
            {
                cin>>x1>>y1>>x2>>y2>>col;
                if(x1>x2)
                    swap(x1,x2);
                if(y1>y2)
                    swap(y1,y2);
                if(x1>=1 && x1<=m && x2>=1 && x2<=m && y1>=1 && y1<=n && y2>=1 && y2<=n)
                {
                   for(int i=y1-1;i<=y2-1;i++)
                   {
                     for(int j=x1-1;j<=x2-1;j++)
                        mat[i][j]=col;
                   }
                }
            }
            else if(c=='F')
            {
                cin>>x1>>y1>>col;
                if(x1>=1 && x1<=m && y1>=1 && y1<=n)
                {
                  memset(visited,0,sizeof(visited));
                  visited[y1-1][x1-1]=1;
                  rec(x1-1,y1-1,mat,m,n,col,visited);
                }
            }
            else if(c=='S')
            {
                string name;
                cin>>name;
                cout<<name<<endl;
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<m;j++)
                        cout<<mat[i][j];
                    cout<<endl;
                }
            }
            else
            {
                string str;
                getline(cin,str);
            }



        }
}
