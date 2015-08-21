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
    int i,j,n,XOR;

    while(cin>>n && n!=0)
    {
        XOR=0;
        for(i=1;i<=n;i++)
        {
            cin>>j;
            XOR=XOR^j;
        }
        if(XOR)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}

