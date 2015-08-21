#include<bits/stdc++.h>

using namespace std;

long long Fib(int n)
{
  long long f[n+1];

  f[0] = 0;
  f[1] = 1;

  for(int i = 2; i <= n; i++)
      f[i] = f[i-1] + f[i-2];

  return f[n];
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int n;
    while(cin>>n && n!=0)
        cout<<Fib(n+1)<<endl;

    return 0;
}
