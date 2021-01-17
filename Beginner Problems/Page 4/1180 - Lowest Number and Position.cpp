//https://www.urionlinejudge.com.br/judge/en/problems/view/1180

#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int x, mn, j;
    cin>>x;
    int N[x];
    for (int i = 0; i < x; i++)
    {
        cin>>N[i];
    }
    mn = N[0];
    j = 0;
    for (int i = 1; i < x; i++)
        if (N[i] < mn)
        {
            mn = N[i];
            j = i;
        }
    cout<<"Menor valor: "<<mn<<endl;
    cout<<"Posicao: "<<j<<endl;
    return 0;
}
