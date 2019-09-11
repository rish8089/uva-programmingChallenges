//things to remember
//swap a and b if not in proper order

#include <bits/stdc++.h>
using namespace std;
#define u_int unsigned int
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    u_int a,b;
    while(cin>>a>>b)
    {
        int ans=0;
        u_int small,large;
        small=a<=b?a:b;
        large=a<=b?b:a;
        for(u_int i=small;i<=large;i++)
        {
            u_int temp=i;
            int len=1;
            while(i!=1)
            {
                if(i&1)
                    i=i*3+1;
                else
                    i=i>>1;
                len+=1;
            }
            ans=max(ans,len);
            i=temp;
        }
        cout<<a<<" "<<b<<" "<<ans<<endl;
    }
}

