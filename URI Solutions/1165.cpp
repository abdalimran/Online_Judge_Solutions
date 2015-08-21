#include <iostream>
#include <cmath>
 
using namespace std;
 
bool is_prime(unsigned long n)
{
    if (n == 2) return true;
    if (n % 2 == 0 || n < 2) return false;
 
    for (unsigned long i = 3; i <= sqrt(n); i += 2){
        if (n % i == 0) return false;
    }
    return true;
}
 
int main()
{
    int n, i;
    cin>>i;
 
    while(i--)
    {
        cin>>n;
        if (is_prime(n))
            cout<<n<<" eh primo"<<endl;
        else
            cout<<n<<" nao eh primo"<<endl;
    }
 
    return 0;
}