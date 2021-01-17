//https://www.urionlinejudge.com.br/judge/en/problems/view/1094

#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main()
{
    int n, x;
    char ch;
    int ta = 0, c = 0, r = 0, s = 0;
    cin>>n;

    for (int i=0; i<n; i++)
    {
        cin>>x>>ch;
        ta+=x;
        if (ch == 'c'|| ch == 'C')
            c+=x;
        else if (ch == 'r'|| ch == 'R')
            r+=x;
        else if (ch == 's'|| ch == 'S')
            s+=x;
    }
    cout<<"Total: "<<ta<<" cobaias\n";
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<1.00*c/ta*100<<" %\n";
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<1.00*r/ta*100<<" %\n";
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<1.00*s/ta*100<<" %\n";

    return 0;
}
