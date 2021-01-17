//https://www.urionlinejudge.com.br/judge/en/problems/view/1178

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x, N[100];
    cin>>x;
    for (int i = 0; i < 100; i++)
    {
        N[i]= x;
        x /= 2;
        cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<N[i]<<endl;
    }
    return 0;
}
