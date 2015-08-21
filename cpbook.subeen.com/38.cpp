/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <string>
#include <sstream>
#include <iostream>

using namespace std;

static string reverseWords(string const& instr)
{
    istringstream iss(instr);
    string outstr;
    string word;
    iss >> outstr;
    while (iss >> word)
        outstr = word + ' ' + outstr;
    return outstr;
}

int main()
{
    int n;
    cin>>n;
    cin.ignore();

    while(n--)
    {
        string s;
        getline(cin,s);
        string sret = reverseWords(s);
        cout<<sret<<endl;
    }

    return 0;
}

