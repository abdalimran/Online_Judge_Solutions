#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int x, n, s;
    cin>>x;
 
    while(x--)
    {
        cin>>n;
        s = 0;
        for (int i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
                s += i;
        }
        if (s == n)
            cout<<n<<" eh perfeito"<<endl;
        else
            cout<<n<<" nao eh perfeito"<<endl;
    }
    return 0;
}