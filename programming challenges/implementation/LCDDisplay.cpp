#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(true)
    {
        int s;
        cin>>s;
        string str;
        cin>>str;
        if(s==0 && (str[0]=='0' && str.size()==1))
            break;

        for(int i=1; i<=2*s+3; i++)
        {
            for(int j=0; j<str.size(); j++)
            {
                switch(str[j])
                {
                case '1':
                    for(int k=1; k<=s+2; k++)
                    {
                        if((i>=2 && i<=s+1) || (i>=s+3 && i<=2*s+2))
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';
                    }
                    break;
                case '2':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i>=2 && i<=s+1)
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else if(i>=s+3 && i<=2*s+2)
                        {
                            if(k==1)
                                cout<<'|';
                            else
                                cout<<' ';

                        }
                        else
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '3':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3 || i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '4':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i>=2 && i<=s+1)
                        {
                            if(k==s+2 || k==1)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else if(i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if(i>=s+3 && i<=2*s+2)
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';

                    }
                    break;
                case '5':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3 || i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if(i>=2 && i<=s+1)
                        {
                            if(k==1)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '6':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3 || i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if(i>=2 && i<=s+1)
                        {
                            if(k==1)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                        {
                            if(k==s+2 || k==1)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '7':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if((i>=2 && i<=s+1) || (i>=s+3 && i<=2*s+2))
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';
                    }
                    break;

                case '8':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3 || i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else
                        {
                            if(k==1 || k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '9':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==s+2 || i==2*s+3)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if(i>=2 && i<=s+1)
                        {
                            if(k==1 || k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else if(i>=s+3 && i<=2*s+2)
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';
                    }
                    break;
                case '0':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if((i>=2 && i<=s+1) || (i>=s+3 && i<=2*s+2))
                        {
                            if(k==1 || k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';
                    }

                }



                if(j<str.size()-1)
                    cout<<' ';


            }
            cout<<endl;
        }
        cout<<endl;

    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(true)
    {
        int s;
        cin>>s;
        string str;
        cin>>str;
        if(s==0 && (str[0]=='0' && str.size()==1))
            break;

        for(int i=1; i<=2*s+3; i++)
        {
            for(int j=0; j<str.size(); j++)
            {
                switch(str[j])
                {
                case '1':
                    for(int k=1; k<=s+2; k++)
                    {
                        if((i>=2 && i<=s+1) || (i>=s+3 && i<=2*s+2))
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';
                    }
                    break;
                case '2':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i>=2 && i<=s+1)
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else if(i>=s+3 && i<=2*s+2)
                        {
                            if(k==1)
                                cout<<'|';
                            else
                                cout<<' ';

                        }
                        else
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '3':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3 || i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '4':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i>=2 && i<=s+1)
                        {
                            if(k==s+2 || k==1)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else if(i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if(i>=s+3 && i<=2*s+2)
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';

                    }
                    break;
                case '5':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3 || i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if(i>=2 && i<=s+1)
                        {
                            if(k==1)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '6':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3 || i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if(i>=2 && i<=s+1)
                        {
                            if(k==1)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                        {
                            if(k==s+2 || k==1)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '7':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if((i>=2 && i<=s+1) || (i>=s+3 && i<=2*s+2))
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';
                    }
                    break;

                case '8':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3 || i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else
                        {
                            if(k==1 || k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '9':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==s+2 || i==2*s+3)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if(i>=2 && i<=s+1)
                        {
                            if(k==1 || k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else if(i>=s+3 && i<=2*s+2)
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';
                    }
                    break;
                case '0':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if((i>=2 && i<=s+1) || (i>=s+3 && i<=2*s+2))
                        {
                            if(k==1 || k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';
                    }

                }



                if(j<str.size()-1)
                    cout<<' ';


            }
            cout<<endl;
        }
        cout<<endl;

    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(true)
    {
        int s;
        cin>>s;
        string str;
        cin>>str;
        if(s==0 && (str[0]=='0' && str.size()==1))
            break;

        for(int i=1; i<=2*s+3; i++)
        {
            for(int j=0; j<str.size(); j++)
            {
                switch(str[j])
                {
                case '1':
                    for(int k=1; k<=s+2; k++)
                    {
                        if((i>=2 && i<=s+1) || (i>=s+3 && i<=2*s+2))
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';
                    }
                    break;
                case '2':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i>=2 && i<=s+1)
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else if(i>=s+3 && i<=2*s+2)
                        {
                            if(k==1)
                                cout<<'|';
                            else
                                cout<<' ';

                        }
                        else
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '3':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3 || i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '4':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i>=2 && i<=s+1)
                        {
                            if(k==s+2 || k==1)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else if(i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if(i>=s+3 && i<=2*s+2)
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';

                    }
                    break;
                case '5':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3 || i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if(i>=2 && i<=s+1)
                        {
                            if(k==1)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '6':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3 || i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if(i>=2 && i<=s+1)
                        {
                            if(k==1)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                        {
                            if(k==s+2 || k==1)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '7':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if((i>=2 && i<=s+1) || (i>=s+3 && i<=2*s+2))
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';
                    }
                    break;

                case '8':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3 || i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else
                        {
                            if(k==1 || k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '9':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==s+2 || i==2*s+3)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if(i>=2 && i<=s+1)
                        {
                            if(k==1 || k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else if(i>=s+3 && i<=2*s+2)
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';
                    }
                    break;
                case '0':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if((i>=2 && i<=s+1) || (i>=s+3 && i<=2*s+2))
                        {
                            if(k==1 || k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';
                    }

                }



                if(j<str.size()-1)
                    cout<<' ';


            }
            cout<<endl;
        }
        cout<<endl;

    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(true)
    {
        int s;
        cin>>s;
        string str;
        cin>>str;
        if(s==0 && (str[0]=='0' && str.size()==1))
            break;

        for(int i=1; i<=2*s+3; i++)
        {
            for(int j=0; j<str.size(); j++)
            {
                switch(str[j])
                {
                case '1':
                    for(int k=1; k<=s+2; k++)
                    {
                        if((i>=2 && i<=s+1) || (i>=s+3 && i<=2*s+2))
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';
                    }
                    break;
                case '2':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i>=2 && i<=s+1)
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else if(i>=s+3 && i<=2*s+2)
                        {
                            if(k==1)
                                cout<<'|';
                            else
                                cout<<' ';

                        }
                        else
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '3':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3 || i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '4':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i>=2 && i<=s+1)
                        {
                            if(k==s+2 || k==1)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else if(i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if(i>=s+3 && i<=2*s+2)
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';

                    }
                    break;
                case '5':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3 || i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if(i>=2 && i<=s+1)
                        {
                            if(k==1)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '6':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3 || i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if(i>=2 && i<=s+1)
                        {
                            if(k==1)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                        {
                            if(k==s+2 || k==1)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '7':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if((i>=2 && i<=s+1) || (i>=s+3 && i<=2*s+2))
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';
                    }
                    break;

                case '8':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3 || i==s+2)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else
                        {
                            if(k==1 || k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                    }
                    break;
                case '9':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==s+2 || i==2*s+3)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if(i>=2 && i<=s+1)
                        {
                            if(k==1 || k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else if(i>=s+3 && i<=2*s+2)
                        {
                            if(k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';
                    }
                    break;
                case '0':
                    for(int k=1; k<=s+2; k++)
                    {
                        if(i==1 || i==2*s+3)
                        {
                            if(k>=2 && k<=s+1)
                                cout<<'-';
                            else
                                cout<<' ';
                        }
                        else if((i>=2 && i<=s+1) || (i>=s+3 && i<=2*s+2))
                        {
                            if(k==1 || k==s+2)
                                cout<<'|';
                            else
                                cout<<' ';
                        }
                        else
                            cout<<' ';
                    }

                }



                if(j<str.size()-1)
                    cout<<' ';


            }
            cout<<endl;
        }
        cout<<endl;

    }
}
