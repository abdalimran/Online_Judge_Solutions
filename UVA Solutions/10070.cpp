#include <bits/stdc++.h>

using namespace std;

bool divChk(string str,int divisor)
{
    int num=0;

    for(int i=0; i<str.length(); i++)
    {
        num = ((str[i]-'0') + num * 10) % divisor;
    }

    if(num == 0)
        return true;
    else
        return false;
}

bool leapYear(string year)
{
    if((divChk(year,4)==true && divChk(year,100)==false) || divChk(year,400)==true)
        return true;
    else
        return false;
}

bool huluculu(string year)
{
   if(divChk(year,15)==true)
        return true;
   else
        return false;
}


bool bulukulu(string year)
{
   if(leapYear(year)==true && divChk(year,55)==true)
        return true;
   else
        return false;
}

int main()
{
    string year;

    int nl=0;

    while(cin>>year)
    {
        if(nl==1)
        cout<<endl;
        if(leapYear(year)==true)
        {
            cout<<"This is leap year."<<endl;
            nl=1;
        }

        if(huluculu(year)==true)
        {
            cout<<"This is huluculu festival year."<<endl;
            nl=1;
        }

        if(bulukulu(year)==true)
        {
            cout<<"This is bulukulu festival year."<<endl;
            nl=1;
        }

        if(leapYear(year)==false && huluculu(year)==false && bulukulu(year)==false)
        {
            cout<<"This is an ordinary year."<<endl;
            nl=1;
        }

    }

    return 0;
}


