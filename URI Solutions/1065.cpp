#include <iostream>
 
using namespace std;
 
int main()
{
   int n,even=0;
 
   for(int i=1; i<=5; i++)
   {
       cin>>n;
 
       if(n%2==0)
           even++;
   }
 
   cout<<even<<" valores pares"<<endl;
 
   return 0;
}