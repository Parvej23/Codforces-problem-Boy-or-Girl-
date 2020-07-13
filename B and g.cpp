#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int counts=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=s[i+1])
        {
            counts++;
        }
    }
    if(counts%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;

    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;

    }
}
