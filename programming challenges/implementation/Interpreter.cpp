#include <bits/stdc++.h>
using namespace std;
#define mod 1000
#define lim 1000
int r[10];
string ram[lim];
void init()
{
    for(int i=0;i<lim;i++)
        ram[i]="000";
    memset(r,0,sizeof(r));
}
string convertIntToStr(int num)
{
    string str=to_string(num);
    int d=0;
    while(num>0)
    {
        d+=1;
        num/=10;
    }
    return string(3-d,'0').append(str);
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    int t;
    cin>>t;
    string str;
    getline(cin,str);
    getline(cin,str);
    for(int i=1;i<=t;i++)
    {
        init();
        int idx=0;
        while(getline(cin,str))
        {
            if(str.size()==0)
                break;
            ram[idx++]=str;
        }

        int pos=0;
        int cnt=1;//for halt instruction
        while(pos<lim && ram[pos].compare("100"))
        {
            int d=ram[pos][1]-'0';
            int s=ram[pos][2]-'0';
            switch(ram[pos][0])
            {
            case '2':
                r[d]=s;
                pos++;
                break;
            case '3':
                r[d]=(r[d]+s)%mod;
                pos++;
                break;
            case '4':
                r[d]=(r[d]*s)%mod;
                pos++;
                break;
            case '5':
                r[d]=r[s];
                pos++;
                break;
            case '6':
                r[d]=(r[d]+r[s])%mod;
                pos++;
                break;
            case '7':
                r[d]=(r[d]*r[s])%mod;
                pos++;
                break;
            case '8':
                r[d]=stoi(ram[r[s]]);
                pos++;
                break;
            case '9':
                ram[r[s]]=convertIntToStr(r[d]);
                pos++;
                break;
            case '0':
                if(r[s]!=0)
                    pos=r[d];
                else
                    pos++;
                break;
            default:
                break;
            }
            cnt++;
        }

        cout<<cnt<<endl;


        if(i<t)
            cout<<endl;
    }


}
