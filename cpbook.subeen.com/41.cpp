/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        string str;
        getline(cin,str);

        size_t pos = str.find(' ');
        string sbstr = str.substr(pos+1);

        size_t found = str.find(sbstr);

        if (found!=string::npos)
            cout <<found<<endl;
    }

    return 0;
}

