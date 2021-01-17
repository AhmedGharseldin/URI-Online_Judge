//https://www.urionlinejudge.com.br/judge/en/problems/view/1183

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char o;
    double M[12][12], sum = 0;
    cin>>o;
    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 12; j++)
            cin>>M[i][j];
    }
    for(int i = 0; i < 11; i++)
    {
        for(int j = i + 1; j < 12; j++)
            sum+=M[i][j];
    }
    if (o == 'S')
        cout<<fixed<<setprecision(1)<<sum<<endl;
    else if (o == 'M')
        cout<<fixed<<setprecision(1)<<sum/66<<endl;
    return 0;
}
