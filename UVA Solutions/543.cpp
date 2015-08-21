#include <bits/stdc++.h>

using namespace std;

#define M 1000000

bool marked[M];

void sieve ()
{
    for (int k=2; k<=M; k++)
    {
        if (marked[k] == false)
        {
            for (int j = k+k; j<=M; j+=k)
                marked[j] = true;
        }
    }
}

int main()
{
    int n,n1,n2,i,j;

    sieve();

    while(cin>>n && n!=0)
    {
        bool ver=false;;

        for(i=3;i<=n-i;i=i+2)
        {
            int n1=n-i;
            if(marked[i]==false && marked[n1]==false)
            {
                ver=true;
                break;
            }
       }

       if(ver==true)
           cout<<n<<" = "<<i<<" + "<<n-i<<endl;
       else if(ver==false)
           cout<<"Goldbach's conjecture is wrong."<<endl;
    }

    return 0;
}
