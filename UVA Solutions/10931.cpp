#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    unsigned int num;

    while(cin>>num && num!=0)
    {
        bitset<32>bits(num);

        string str_bits = bits.to_string();

        int first_digit = str_bits.find('1');

        string out= str_bits.substr(first_digit,str_bits.length());

        int parity = count(out.begin(), out.end(),'1');

        cout<<"The parity of "<<out<<" is "<<parity<<" (mod 2)."<<endl;

    }

    return 0;
}

