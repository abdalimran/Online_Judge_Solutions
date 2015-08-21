#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        string s;
        getline(cin,s);

        int c=0;

        for(int i=0; i<s.length(); i++)
        {
            if((isdigit(s[i]) && s[i+1]==' ') || (isdigit(s[i]) && s[i+1]=='\0'))
                c++;
        }

        istringstream iss;
        iss.str(s);

        vector<int>v;

        for(int i=0; i<c; i++)
        {
            string val;
            iss>>val;
            v.push_back(stoi(val));
        }

        int ans=0;

        for(int i=0;i<v.size(); ++i)
        {
            for(int j = i+1; j<v.size(); ++j)
            {
                ans = max(ans,gcd(v[i],v[j]));
            }

        }

        cout<<ans<<endl;
    }


    return 0;
}

