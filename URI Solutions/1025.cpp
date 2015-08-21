/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */
 
#include <bits/stdc++.h>
#define endl '\n'
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
 
    int n,q,t=0;
    vector<int>N;
    vector<int>::iterator indx;
 
    while(cin>>n>>q && (n!=0 && q!=0))
    {
        while(n--)
        {
            int p;
            cin>>p;
            N.push_back(p);
        }
 
        sort(N.begin(),N.end());
 
        cout<<"CASE# "<<++t<<":"<<endl;
 
        while(q--)
        {
            int num;
            cin>>num;
 
            indx=lower_bound(N.begin(),N.end(), num);
 
            int pos=indx-N.begin();
 
            if(indx == N.end() || *indx!=num)
                cout<<num<<" not found";
            else
                cout<<num<<" found at "<<pos+1;
 
            cout<<endl;
        }
        N.clear();
    }
 
    return 0;
}
