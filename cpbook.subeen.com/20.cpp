/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include<iostream>
#include<string>

using namespace std;

int main()

{
    int n,count;
    string str;

    cin>>n;
    cin.ignore();

    for(int i=0; i<n; i++)
    {
        getline(cin,str);

        {
            count=1;

            for(int j=0; j<str.length(); j++)
            {
                if(str[j]==' '&& str[j+1]!=' ')
                    {
                        count++;
                    }
            }
            cout<<count*420<<endl;
        }
    }
    return 0;
}

