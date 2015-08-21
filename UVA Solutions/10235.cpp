#include <iostream>
#include <cstdio>

using namespace std;

int Rev(int num)
{
    int rev=0,n=num;
    if(num>=10)
    {
        while(num!=0)
        {
            rev = rev * 10;
            rev = rev + num%10;
            num = num/10;
        }
        if(rev==n)
            return 0;
        else
            return rev;
    }
    else
        return 0;
}

bool isPrime (int n)
{
    if(n<2)
        return false;
    for (long long i=2; i*i<=n; i++)
    {
        if (n%i==0)
            return false;
    }

    return true;
}

int main()
{
    int n;

    while(scanf("%d",&n)==1)
    {
        if(isPrime(n)==true && isPrime(Rev(n))==true)
            printf("%d is emirp.\n",n);
        else if(isPrime(n)==true && isPrime(Rev(n))==false)
            printf("%d is prime.\n",n);
        else
            printf("%d is not prime.\n",n);
    }

    return 0;
}

