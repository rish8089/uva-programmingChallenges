#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(true)
    {
        int n;
        cin>>n;
        if(n==0)
            break;

        ll sum=0;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            ll dollar;
            char temp;
            ll cent;
            cin>>dollar>>temp>>cent;
            a[i]=dollar*100+cent;
            sum+=a[i];
        }

        ll lowAverage=sum/n;
        ll highAverage=lowAverage+(sum%n?1:0);

        ll sumBelow=0;
        ll sumAbove=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<lowAverage)
                sumBelow+=lowAverage-a[i];
            if(a[i]>highAverage)
                sumAbove+=a[i]-highAverage;
        }
        ll amountShared=max(sumBelow,sumAbove);
        cout<<'$'<<(amountShared/100)<<'.'<<setw(2)<<setfill('0')<<(amountShared%100)<<endl;

    }
}
