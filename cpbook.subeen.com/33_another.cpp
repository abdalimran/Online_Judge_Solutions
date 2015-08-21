/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
     Coder: Abdullah-Al-Imran
     Email: abdalimran@gmail.com  */

#include <iostream>
using namespace std;

int main() {
	int n,i,j;
	double n1,n2,n3;
	cin>>n;
	for(i=1;i<=n;i++){
            cin>>n1>>n2>>n3;
        cout<<"Case "<<i<<": ";
    if((n1==n2)&&(n2==n3)&&(n1==n3)){
        cout<<"Both"<<endl;

    }
    else if((n1-n2)==(n2-n3)){
        cout<<"Arithmetic Progression"<<endl;

    }
    else if((n2/n1)==(n3/n2)){
        cout<<"Geometric Progression"<<endl;

    }
    else
        cout<<"None"<<endl;
	}
return 0;
}
