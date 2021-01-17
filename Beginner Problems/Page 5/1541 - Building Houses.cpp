//https://www.urionlinejudge.com.br/judge/en/problems/view/1541

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c,area;
    while (true)
    {
        cin>>a;
        if (a == 0)
            break;
        cin>>b>>c;
        area = sqrt ((a * b) / (c/100));
        cout<<(int)area<<endl;
    }
    return 0;
}
