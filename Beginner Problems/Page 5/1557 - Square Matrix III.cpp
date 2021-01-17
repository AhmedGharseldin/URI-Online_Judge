//https://www.urionlinejudge.com.br/judge/en/problems/view/1557

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int di (int d)
{
    int digits=0;
    while (d)
    {
        d/=10;
        digits++;
    }
    return digits;
}

int main ()
{
//    ofstream cout;
//    cout.open("output.txt");
    int n;

    while(cin>>n && n)
    {
        int arr[n][n];
        int x = 1, j = 0;
        for (int i = 0; i < n; i++)
        {
            for ( j = 0; j < n; j++)
            {
                arr[i][j] = x;
                x+=x;
            }
            x = arr[i-1][j+1];
        }
        int d = di(arr[n-1][n-1]);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<setw(d)<<arr[i][j]<<(j == n-1?"\n":" ");
            }
        }
                cout<<endl;
    }
    return 0;
}
