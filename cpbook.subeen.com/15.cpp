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
        getline(cin, str);

        int num=str.length()-1;

        if(str[num] == '0'||str[num] == '2'||str[num] == '4'||str[num] == '6'||str[num] == '8')
            cout<<"even"<<endl;
        else
            cout<<"odd"<<endl;
    }

    return 0;
}
