#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main ()
 
{
    double a,b,c;
    const double pi=3.14159;
 
    cin>>a>>b>>c;
 
    double triangle = (.5*a*c);
    double circle = (pi*c*c);
    double trapezium = ((a+b)/2)*c;
    double square = b*b;
    double rectangle = a*b;
 
    cout<<fixed<<setprecision(3);
 
    cout<<"TRIANGULO: "<<triangle<<endl;
    cout<<"CIRCULO: "<<circle<<endl;
    cout<<"TRAPEZIO: "<<trapezium<<endl;
    cout<<"QUADRADO: "<<square<<endl;
    cout<<"RETANGULO: "<<rectangle<<endl;
 
    return 0;
}
