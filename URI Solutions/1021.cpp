#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    double amnt,t100,t50,t20,t10,t5,t2;
    double c1,c50,c25,c10,c05,c01;
 
    cin>>amnt;
 
 
    t100=(amnt/100.00);
    amnt=(fmod(amnt,100.00));
 
    t50=(amnt/50);
    amnt=(fmod(amnt,50.00));
 
    t20=(amnt/20);
    amnt=(fmod(amnt,20.00));
 
    t10=(amnt/10);
    amnt=(fmod(amnt,10.00));
 
    t5=(amnt/5);
    amnt=(fmod(amnt,5.00));
 
    t2=(amnt/2);
    amnt=(fmod(amnt,2.00));
 
 
    cout<<"NOTAS:"<<endl;
    cout<<int(t100)<<" nota(s) de R$ 100.00"<<endl;
    cout<<int(t50)<<" nota(s) de R$ 50.00"<<endl;
    cout<<int(t20)<<" nota(s) de R$ 20.00"<<endl;
    cout<<int(t10)<<" nota(s) de R$ 10.00"<<endl;
    cout<<int(t5)<<" nota(s) de R$ 5.00"<<endl;
    cout<<int(t2)<<" nota(s) de R$ 2.00"<<endl;
 
    c1=amnt;
    amnt=(fmod(amnt,1.00));
 
    c50=(amnt/.50);
    amnt=(fmod(amnt,.50));
 
    c25=(amnt/.25);
    amnt=(fmod(amnt,.25));
 
    c10=(amnt/.10);
    amnt=(fmod(amnt,.10));
 
    c05=(amnt/.05);
    amnt=(fmod(amnt,.05));
 
    c01=(amnt/.01);
 
    cout<<"MOEDAS:"<<endl;
    cout<<int(c1)<<" moeda(s) de R$ 1.00"<<endl;
    cout<<int(c50)<<" moeda(s) de R$ 0.50"<<endl;
    cout<<int(c25)<<" moeda(s) de R$ 0.25"<<endl;
    cout<<int(c10)<<" moeda(s) de R$ 0.10"<<endl;
    cout<<int(c05)<<" moeda(s) de R$ 0.05"<<endl;
    cout<<int(c01)<<" moeda(s) de R$ 0.01"<<endl;
 
 
    return 0;
}
