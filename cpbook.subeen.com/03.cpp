/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

#include <string>

using namespace std;

int main()

{
    int n;

    string line;

    cin>>n;
    cin.ignore();

    for(int i=1; i<=n; i++)
    {
        getline(cin, line);

        int cnt=1;

        int sz = line.size();

        for(int j=0; j<sz; j++)
        {
            if(line[j]==' ')
                cnt++;

        }

        cout<<cnt<<endl;

    }

    return 0;
}
