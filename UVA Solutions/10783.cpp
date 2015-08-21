#include <iostream>

using namespace std;

int main()
{
    int a,b,n,p=0,i,t=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        for(i=a;i<=b;i++){
            if(i%2!=0){
                p=p+i;
            }
        }
        t++;
        cout<<"Case "<<t<<": "<<p<<endl;
        p=0;
    }
    return 0;
}
