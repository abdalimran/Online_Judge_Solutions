#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int t;
    cin>>t;

    cin.ignore();

    while(t--)
    {
        cin>>s;

        if(s.length()>3)
            cout<<"3"<<endl;
        else if((s.find('t')<=3 && s.find('w')<=3) || (s.find('o')<=3 && s.find('w')<=3) || (s.find('o')<=3 && s.find('t')<=3))
            cout<<"2"<<endl;
        else
            cout<<"1"<<endl;
    }

    return 0;
}


