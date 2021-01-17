//https://www.urionlinejudge.com.br/judge/en/problems/view/1175

#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int N[20], i;
    for (i = 0; i < 20; i++)
    {
        cin>>N[i];
    }
    i = 0;
    for (int j = 19; j>=0; j--)
        cout<<"N["<<i++<<"] = "<<N[j]<<endl;
    return 0;
}
