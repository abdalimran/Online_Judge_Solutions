#include <iostream>
 
using namespace std;
 
int main()
{
   int n,even=0,odd=0,pos=0,neg=0;
 
   for(int i=1; i<=5; i++)
   {
       cin>>n;
 
       if(n%2==0)
           even++;
       if(n%2!=0)
           odd++;
       if(n>0)
           pos++;
       if(n<0)
           neg++;
   }
 
   cout<<even<<" valor(es) par(es)"<<endl;
   cout<<odd<<" valor(es) impar(es)"<<endl;
   cout<<pos<<" valor(es) positivo(s)"<<endl;
   cout<<neg<<" valor(es) negativo(s)"<<endl;
 
   return 0;
}