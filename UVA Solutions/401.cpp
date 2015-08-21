#include <bits/stdc++.h>

using namespace std;

bool palindrome(string s)
{
    string r(s.rbegin(),s.rend());
    if(r==s)
        return true;
    else
        return false;
}

bool mirror(string s)
{
    string r(s.rbegin(),s.rend());
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='A')
            s[i]='A';
        else if(s[i]=='E')
            s[i]='3';
        else if(s[i]=='3')
            s[i]='E';
        else if(s[i]=='H')
            s[i]='H';
        else if(s[i]=='I')
            s[i]='I';
        else if(s[i]=='L')
            s[i]='J';
        else if(s[i]=='J')
            s[i]='L';
        else if(s[i]=='M')
            s[i]='M';
        else if(s[i]=='O')
            s[i]='O';
        else if(s[i]=='0')
            s[i]='O';
        else if(s[i]=='S')
            s[i]='2';
        else if(s[i]=='2')
            s[i]='S';
        else if(s[i]=='T')
            s[i]='T';
        else if(s[i]=='U')
            s[i]='U';
        else if(s[i]=='V')
            s[i]='V';
        else if(s[i]=='W')
            s[i]='W';
        else if(s[i]=='X')
            s[i]='X';
        else if(s[i]=='Y')
            s[i]='Y';
        else if(s[i]=='Z')
            s[i]='5';
        else if(s[i]=='5')
            s[i]='Z';
        else if(s[i]=='1')
            s[i]='1';
        else if(s[i]=='8')
            s[i]='8';
        else
            return false;
    }
    if(r==s)
        return true;
    else
        return false;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    string s;

    while(cin>>s)
    {
        if(palindrome(s)==true && mirror(s)==true)
            cout<<s<<" -- is a mirrored palindrome.\n"<<endl;
        else if(palindrome(s)==true)
            cout<<s<<" -- is a regular palindrome.\n"<<endl;
        else if(mirror(s)==true)
            cout<<s<<" -- is a mirrored string.\n"<<endl;
        else
            cout<<s<<" -- is not a palindrome.\n"<<endl;
    }

    return 0;
}


