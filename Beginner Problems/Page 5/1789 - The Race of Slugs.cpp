//https://www.urionlinejudge.com.br/judge/en/problems/view/1789

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main ()
{
//    ofstream cout;
//    cout.open("output.txt");
    int n;
    while (cin>>n)
    {
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
            cin>>arr[i];
        sort(arr, arr+n);
        if (arr[n-1]<10)
            cout<<1<<endl;
        else if (arr[n-1]<20)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }
    return 0;
}
