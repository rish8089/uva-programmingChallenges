#include <bits/stdc++.h>
using namespace std;
string board[8];
void readBlankLine()
{
    string str;
    getline(cin,str);
}
bool areAllSquaresEmpty(string board[])
{
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(board[i][j]!='.')
                return false;
        }
    }
    return true;
}

bool isUpperLeftDiagonalEmpty(int x,int y,int kx,int ky)
{
    //upper left half
    for(int l=x-1; l>kx && y-x+l>ky; l--)
    {
        if(board[l][y-x+l]!='.')
            return false;
    }
    return true;
}

bool isUpperRightDiagonalEmpty(int x,int y,int kx,int ky)
{
    for(int l=x-1; l>kx && y+x-l<ky; l--)
    {
        if(board[l][y+x-l]!='.')
            return false;
    }
    return true;
}

bool isBottomLeftDiagonalEmpty(int x,int y,int kx,int ky)
{
    for(int l=x+1; l<kx && y+x-l>ky; l++)
    {
        if(board[l][y+x-l]!='.')
            return false;
    }
    return true;
}

bool isBottomRightDiagonalEmpty(int x,int y,int kx,int ky)
{
    for(int l=x+1; l<kx && y-x+l<ky; l++)
    {
        if(board[l][y-x+l]!='.')
            return false;
    }
    return true;
}

bool isRowEmpty(int x,int y,int kx,int ky)
{
    for(int l=min(ky,y)+1; l<=max(ky,y)-1; l++)
    {
        if(board[x][l]!='.')
            return false;
    }
    return true;
}

bool isColumnEmpty(int x,int y,int kx,int ky)
{
    for(int l=min(kx,x)+1; l<=max(kx,x)-1; l++)
    {
        if(board[l][y]!='.')
            return false;
    }
    return true;

}

bool isPathFromBishopToKingEmpty(int x,int y,int kx,int ky)
{
    if(kx-x==ky-y)
    {
        if(kx<x)
            return isUpperLeftDiagonalEmpty(x,y,kx,ky);

        else
            return isBottomRightDiagonalEmpty(x,y,kx,ky);
    }
    else
    {
        if(kx<x)
            return isUpperRightDiagonalEmpty(x,y,kx,ky);
        else
            return isBottomLeftDiagonalEmpty(x,y,kx,ky);
    }
}

bool isPathFromRookToKingEmpty(int x,int y,int kx,int ky)
{
    if(kx==x)
        return isRowEmpty(x,y,kx,ky);
    else
        return isColumnEmpty(x,y,kx,ky);
}
bool isWhiteKingInCheck(string board[])
{
    int kx=-1,ky=-1;
    bool flag=false;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(board[i][j]=='K')
            {
                kx=i;
                ky=j;
                flag=true;
                break;
            }
        }
        if(flag)
            break;
    }

    if(kx==-1 && ky==-1)
        return false;

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            switch(board[i][j])
            {
            case 'p':
                if(kx>i && abs(kx-i)==abs(ky-j) && abs(kx-i)==1)
                    return true;
                break;
            case 'b':
                if(abs(kx-i)==abs(ky-j) && isPathFromBishopToKingEmpty(i,j,kx,ky))
                    return true;
                break;
            case 'r':
                if((kx==i || ky==j) && isPathFromRookToKingEmpty(i,j,kx,ky))
                    return true;
                break;
            case 'n':
                if((abs(kx-i)==2 && abs(ky-j)==1) || (abs(kx-i)==1 && abs(ky-j)==2))
                    return true;
                break;
            case 'q':
                if((abs(kx-i)==abs(ky-j) && isPathFromBishopToKingEmpty(i,j,kx,ky)) || ((kx==i || ky==j) && isPathFromRookToKingEmpty(i,j,kx,ky)))
                    return true;
                break;
            }
        }
    }

    return false;
}
bool isBlackKingInCheck(string board[])
{
    int kx=-1,ky=-1;
    bool flag=false;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(board[i][j]=='k')
            {
                kx=i;
                ky=j;
                flag=true;
                break;
            }
        }
        if(flag)
            break;
    }

    if(kx==-1 && ky==-1)
        return false;

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            switch(board[i][j])
            {
            case 'P':
                if(kx<i && abs(kx-i)==abs(ky-j) && abs(kx-i)==1)
                    return true;
                break;
            case 'B':
                if(abs(kx-i)==abs(ky-j) && isPathFromBishopToKingEmpty(i,j,kx,ky))
                    return true;
                break;
            case 'R':
                if((kx==i || ky==j) && isPathFromRookToKingEmpty(i,j,kx,ky))
                    return true;
                break;
            case 'N':
                if((abs(kx-i)==2 && abs(ky-j)==1) || (abs(kx-i)==1 && abs(ky-j)==2))
                    return true;
                break;
            case 'Q':
                if((abs(kx-i)==abs(ky-j) && isPathFromBishopToKingEmpty(i,j,kx,ky)) || ((kx==i || ky==j) && isPathFromRookToKingEmpty(i,j,kx,ky)))
                    return true;
                break;


            }
        }
    }

    return false;
}


int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int cnt=1;
    while(true)
    {
        for(int i=0; i<8; i++)
            cin>>board[i];

        if(areAllSquaresEmpty(board))
            break;

        if(isWhiteKingInCheck(board))
            cout<<"Game #"<<cnt<<": white king is in check."<<endl;
        else if(isBlackKingInCheck(board))
            cout<<"Game #"<<cnt<<": black king is in check."<<endl;
        else
            cout<<"Game #"<<cnt<<": no king is in check."<<endl;

        readBlankLine();
        cnt++;
    }
}
