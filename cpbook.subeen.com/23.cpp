/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        string str;
        getline(cin, str);

        int cnt=0;
        int l=str.length();

        for(int i=0; i<l; i++)
        {
            if (str[i] == '1')
               cnt++;
            else if(str[i] == '0')
               cnt--;
            if(cnt<0)
                break;
        }

        if(cnt<0)
              cout<<"MAGIC"<<endl;
        else
              cout<<"NORMAL"<<endl;
    }

    return 0;
}
