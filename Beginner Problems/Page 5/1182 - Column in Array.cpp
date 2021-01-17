//https://www.urionlinejudge.com.br/judge/en/problems/view/1182

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double M[12][12], sum = 0;
    char t;
    cin>>n>>t;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin>>M[i][j];
        }
    }
    for (int a = 0; a < 12; a++)
    {
        sum += M[a][n];
    }
    if (t == 'S')
        cout<<fixed<<setprecision(1)<<sum<<endl;
    else if (t == 'M')
        cout<<fixed<<setprecision(1)<<sum/12<<endl;
    return 0;
}
