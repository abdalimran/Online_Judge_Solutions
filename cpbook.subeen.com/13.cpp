/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include<iostream>
#include<string>

using namespace std;

int main ()

{
    int n,i,j;

    string str;

    cin>>n;
    cin.ignore();

    while(n--)
    {
        getline(cin,str);

        for(int i=0; i<str.length(); i++)
        {
            if(str[i]=='L')
                str[i]=str[i-1];

            else if(str[i]=='R')
                str[i]=str[i+1];
        }

        cout<<str<<endl;
    }

    return 0;
}
