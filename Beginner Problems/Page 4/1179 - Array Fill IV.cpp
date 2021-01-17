//https://www.urionlinejudge.com.br/judge/en/problems/view/1179

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x=0, y=0, par[5], impar[5];
    for (int i = 0; i < 15; i++)
    {
        cin>>n;
        if (n%2 == 0)
        {
            par[x] = n;
            x++;
        }
        else
        {
            impar[y] = n;
            y++;
        }
        if (x == 5)
            for (int i = 0; i < 5; i++)
            {
                cout<<"par["<<i<<"] = "<<par[i]<<endl;
                x=0;
            }
        if (y == 5)
            for (int i = 0; i < 5; i++)
            {
                cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
                y=0;
            }
    }
    for (int i = 0; i < y; i++)
        cout<<"impar["<<i<<"] = "<<impar[i]<<endl;

    for (int i = 0; i < x; i++)
        cout<<"par["<<i<<"] = "<<par[i]<<endl;

    return 0;
}
