#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        long long i=1,c=1;

        while(i)
        {
          i=(i*10)+1;
          i=i%n;
          c++;
        }
       cout<<c<<endl;
    }

    return 0;
}

