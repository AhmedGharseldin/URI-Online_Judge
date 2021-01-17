//https://www.urionlinejudge.com.br/judge/en/problems/view/1190

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char o;
    double M[12][12], sum = 0;
    cin>>o;
    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 12; j++)
            cin>>M[i][j];
    }
    for(int i = 1; i < 6; i++)
    {
        for(int j = 11; j > 11 - i; j--)
            sum+=M[i][j];
    }

    for(int i = 10; i > 5; i--)
    {
        for(int j = 11; j > i; j--)
            sum+=M[i][j];
    }
    if (o == 'S')
        cout<<fixed<<setprecision(1)<<sum<<endl;
    else if (o == 'M')
        cout<<fixed<<setprecision(1)<<sum/30<<endl;
    return 0;
}
