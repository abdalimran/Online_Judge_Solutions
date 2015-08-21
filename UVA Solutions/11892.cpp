#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <cstdlib>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>

#define pi acos(-1.0)

typedef unsigned long long ull;
typedef long long ll;


using namespace std;

int main()
{
    int i,j,t,n,c1,c2;

    cin>>t;

    while(t--)
    {
        cin>>n;
        c1=0;
        c2=0;
        for(i=1;i<=n;i++)
        {
            cin>>j;

            if(j==1)
                c1++;
            else
                c2++;
        }
        if(c1%2)
            cout<<"poopi"<<endl;
        else
        {
            if(c2>0)
                cout<<"poopi"<<endl;
            else
                cout<<"piloop"<<endl;
        }

    }

    return 0;
}

