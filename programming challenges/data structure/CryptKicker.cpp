#include <bits/stdc++.h>
using namespace std;
void readBlankLine()
{
    string str;
    getline(cin,str);
}
bool rec(vector<vector<string>*> &vec,vector<string> &words,pair<char,int> hash[],pair<char,int> rhash[],int idx,string sol[])
{
    if(idx==words.size())
      return true;
    for(int i=0;i<vec[idx]->size();i++)
    {
        string dictWord=vec[idx]->at(i);
        bool flag=true;
        for(int j=0;j<dictWord.size();j++)
        {
            if(hash[words[idx][j]-'a'].first && rhash[dictWord[j]-'a'].first)
            {
                if(hash[words[idx][j]-'a'].first!=dictWord[j] || rhash[dictWord[j]-'a'].first!=words[idx][j])
                {
                    flag=false;
                    break;
                }
            }
            else if(hash[words[idx][j]-'a'].first  || rhash[dictWord[j]-'a'].first)
            {
                flag=false;
                break;
            }

        }

        if(flag)
        {
            for(int j=0;j<dictWord.size();j++)
            {
                hash[words[idx][j]-'a'].first=dictWord[j];
                hash[words[idx][j]-'a'].second+=1;
                rhash[dictWord[j]-'a'].first=words[idx][j];
                rhash[dictWord[j]-'a'].second+=1;
            }
            sol[idx]=dictWord;
            bool ret=rec(vec,words,hash,rhash,idx+1,sol);
            if(ret)
                return true;
            for(int j=0;j<dictWord.size();j++)
            {
                hash[words[idx][j]-'a'].second-=1;
                rhash[dictWord[j]-'a'].second-=1;

                if(!hash[words[idx][j]-'a'].second)
                    hash[words[idx][j]-'a'].first=0;

                if(!rhash[dictWord[j]-'a'].second)
                    rhash[dictWord[j]-'a'].first=0;

            }
            sol[idx]="";
        }


    }

    return false;
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n;
    cin>>n;
    set<string> dict;
    for(int i=0;i<n;i++)
    {
        string word;
        cin>>word;
        dict.insert(word);
    }
    readBlankLine();
    string str;
    while(getline(cin,str))
    {
        stringstream s(str);
        string token;
        vector<string> words;
        while(getline(s,token,' '))
            words.push_back(token);

        vector<vector<string>*> vec;
        for(int i=0;i<words.size();i++)
        {
            vec.push_back(new vector<string>());
            for(auto it=dict.begin();it!=dict.end();it++)
            {
                string dictWord=*it;
                if(dictWord.size()==words[i].size())
                {
                    char hash[26];
                    char rhash[26];
                    memset(hash,0,sizeof(hash));
                    memset(rhash,0,sizeof(rhash));
                    bool flag=true;
                    for(int j=0;j<words[i].size();j++)
                    {
                        if(!hash[words[i][j]-'a'] && !rhash[dictWord[j]-'a'])
                        {
                            hash[words[i][j]-'a']=dictWord[j];
                            rhash[dictWord[j]-'a']=words[i][j];
                        }
                        else if(hash[words[i][j]-'a'] && rhash[dictWord[j]-'a'])
                        {
                            if(hash[words[i][j]-'a']!=dictWord[j] || rhash[dictWord[j]-'a']!=words[i][j])
                            {
                                flag=false;
                                break;
                            }

                        }
                        else
                        {
                            flag=false;
                            break;
                        }
                    }
                    if(flag)
                        vec[i]->push_back(dictWord);
                }
            }


        }

        string sol[words.size()];
        fill(sol,sol+words.size(),"");
        pair<char,int> hash[26];
        pair<char,int> rhash[26];
        fill(hash,hash+26,make_pair(0,0));
        fill(rhash,rhash+26,make_pair(0,0));
        if(rec(vec,words,hash,rhash,0,sol))
        {
            for(int i=0;i<words.size()-1;i++)
                cout<<sol[i]<<" ";
            cout<<sol[words.size()-1]<<endl;
        }

        else
        {
            for(int i=0;i<words.size()-1;i++)
                cout<<string(words[i].size(),'*')<<" ";

            cout<<string(words[words.size()-1].size(),'*')<<endl;
        }

    }


}
