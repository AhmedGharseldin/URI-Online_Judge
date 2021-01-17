//https://www.urionlinejudge.com.br/judge/en/problems/view/1837

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main ()
{
//    ofstream cout;
//    cout.open("output.txt");
    int n,a, b, q, r;
cin>>a>>b;
        r = a%b;
        if (r<0)
            r = r + abs(b);
        q = (a - r)/b;
        cout<<q<<" "<<r<<endl;
    return 0;
}
