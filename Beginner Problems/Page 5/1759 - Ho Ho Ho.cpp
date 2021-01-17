//https://www.urionlinejudge.com.br/judge/en/problems/view/1759

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main ()
{
//    ofstream cout;
//    cout.open("output.txt");
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Ho"<<(i == n-1?"!\n":" ");
    }

    return 0;
}
