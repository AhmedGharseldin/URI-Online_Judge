//https://www.urionlinejudge.com.br/judge/en/problems/view/1177

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, x, i, N[1000];
    cin>>x;
    for (int j = 0; j < 1000; j++)
    {
        if (i==0)
        {
            i = x;
        }
        N[j]= x - i;
        i--;
        cout<<"N["<<j<<"] = "<<N[j]<<endl;
    }
    return 0;
}
