#include <iostream>
 
using namespace std;
 
int main()
{
   int n,c=1;
   cin>>n;
 
   for(int i=n; c<=6; i++)
   {
      if(i%2==1)
      {
         cout<<i<<endl;
         c++;
      }
   }
 
   return 0;
}