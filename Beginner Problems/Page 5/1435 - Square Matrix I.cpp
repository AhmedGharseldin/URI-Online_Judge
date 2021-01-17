//https://www.urionlinejudge.com.br/judge/en/problems/view/1435

#include <bits/stdc++.h>

using namespace std;

int arr[101][101];
void matrix (int arr[][101], int n)
{
    int row_Col = 0, counter = 1;
    while (row_Col < n)
    {
        for (int i = row_Col; i < n-row_Col; i++)
        {
            for (int j = row_Col; j < n-row_Col; j++)
                arr[i][j] = counter;
        }
        row_Col++;
        counter++;
    }
}
int main()
{
    while (1)
    {
        int n;
        cin>>n;
        if (n==0)
            break;
        matrix(arr, n);
        for (int i =0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<< setw(3) <<arr[i][j];
                if(j < (n-1))
                    cout<<" ";
                else
                    cout<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
