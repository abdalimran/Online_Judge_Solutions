#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    while(getline(cin,s) && s!="DONE")
    {
        s.erase(remove_if(s.begin(), s.end(), not1(ptr_fun (::isalpha))), s.end());

        transform(s.begin(), s.end(), s.begin(),(int(*)(int))tolower);

        string rs(s.rbegin(),s.rend());

        if(s==rs)
            cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;
    }

    return 0;
}

