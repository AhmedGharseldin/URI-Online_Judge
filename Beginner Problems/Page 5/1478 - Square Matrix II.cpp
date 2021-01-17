//https://www.urionlinejudge.com.br/judge/en/problems/view/1478

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, x, y;
    while(1)
    {
        cin>>n;
        int arr[101][101];
        if (n == 0)
            break;
        {
            for (int i = 0; i < n; i++)
            {
                x = i+1;
                for (int j = 0; j <= i; j++)
                {
                    arr[i][j] = x;
                    x--;
                }
                y = 2;
                for (int j = i+1; j <n; j++)
                {
                    arr[i][j] = y;
                    y++;
                }
            }
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cout<<setw(3)<<arr[i][j];
                if (j < n-1)
                    cout<<" ";
                else
                    cout<<endl;
            }
            cout<<endl;
    }
    return 0;
}