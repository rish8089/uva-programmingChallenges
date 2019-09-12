//its not AC solution
//but it contains so many string functions so I thought to include it in my repo.
#include <bits/stdc++.h>
using namespace std;
void readBlankLine()
{
    string str;
    getline(cin,str);
}
void bfs(int erdosNumbers[],vector<vector<int>*>& vec,int s)
{
    bool visited[vec.size()];
    fill(visited,visited+vec.size(),0);
    visited[s]=1;
    queue<int> q;
    q.push(s);
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        for(int i=0; i<vec[v]->size(); i++)
        {
            int adj=vec[v]->at(i);
            if(!visited[adj])
            {
                visited[adj]=1;
                erdosNumbers[adj]=erdosNumbers[v]+1;
                q.push(adj);
            }
        }
    }
}
const string WHITESPACE=" \n\r\t\f\v";
const string ERDOS="Erdos, P.";
string ltrim(const string &str)
{
    size_t start=str.find_first_not_of(WHITESPACE);
    return start==string::npos?"":str.substr(start);
}
string rtrim(const string &str)
{
    size_t end=str.find_last_not_of(WHITESPACE);
    return end==string::npos?"":str.substr(0,end+1);
}
string trim(const string &str)
{
    return ltrim(rtrim(str));
}
string trimName(const string& name)
{
    size_t findFirstName=name.find_first_of(",");
    if(findFirstName==string::npos)
        return name;
    string firstName=name.substr(0,findFirstName+1);
    string lastName=name.substr(findFirstName+1);
    return trim(firstName).append(trim(lastName));
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int p,n;
        cin>>p>>n;
        readBlankLine();
        vector<vector<string>*> papers;
        map<string,int> mp;

        for(int j=0;j<p;j++)
        {
            papers.push_back(new vector<string>());

            string str;
            getline(cin,str);
            while(true)
            {
                size_t findFirstName=str.find_first_of(",");
                string firstName=trim(str.substr(0,findFirstName+1));
                str=str.substr(findFirstName+1);

                size_t findLastName=str.find_first_of(",");
                if(findLastName==string::npos)
                {
                    size_t findLastAuthor=str.find_first_of(":");
                    papers[j]->push_back(trim(firstName.append(trim(str.substr(0,findLastAuthor)))));
                    break;
                }
                else
                {
                    papers[j]->push_back(trim(firstName.append(trim(str.substr(0,findLastName)))));
                    str=str.substr(findLastName+1);
                }

            }

            for(int k=0;k<papers[j]->size();k++)
            {
                int temp=mp.size();
                string author=papers[j]->at(k);
                if(mp.find(author)==mp.end())
                    mp[author]=temp;
            }
        }

        vector<vector<int>*> vec;
        for(int j=0;j<mp.size();j++)
            vec.push_back(new vector<int>());

        for(int j=0;j<p;j++)
        {
            for(int k=0;k<papers[j]->size();k++)
            {
                string author1=papers[j]->at(k);
                for(int l=k+1;l<papers[j]->size();l++)
                {
                    string author2=papers[j]->at(l);
                    if(find(vec[mp[author1]]->begin(),vec[mp[author1]]->end(),mp[author2])==vec[mp[author1]]->end())
                    {
                      vec[mp[author1]]->push_back(mp[author2]);
                      vec[mp[author2]]->push_back(mp[author1]);
                    }
                }
            }
        }

        int erdosNumbers[mp.size()];
        fill(erdosNumbers,erdosNumbers+mp.size(),-1);
        erdosNumbers[mp[ERDOS]]=0;
        bfs(erdosNumbers,vec,mp[ERDOS]);


        cout<<"Scenario "<<i<<endl;
        for(int j=0;j<n;j++)
        {
            string str;
            getline(cin,str);
            string trimmed=trimName(str);
            if(mp.find(trimmed)==mp.end() || erdosNumbers[mp[trimmed]]==-1)
               cout<<str<<" infinity"<<endl;
            else
               cout<<str<<" "<<erdosNumbers[mp[trimmed]]<<endl;

        }







    }
}
