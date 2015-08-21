#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    string soundex[6] = {"BFPV","CGJKQSXZ","DT","L","MN","R"};
    string word;

    while(cin>>word)
    {
        int actual=-1;

        for(int i=0; i<word.size(); i++)
        {
            for(int j=0; j<6; j++)
            {
                size_t found=soundex[j].find(word[i]);

                if(found!=string::npos)
                {
                    if(actual!=j)
                    {
                        cout<<j+1;
                        actual=j;
                        break;
                    }
                    else
                        break;
                }
                else if(j+1==6)
                    actual=-1;
            }
        }
        cout<<endl;
    }
    return 0;
}

