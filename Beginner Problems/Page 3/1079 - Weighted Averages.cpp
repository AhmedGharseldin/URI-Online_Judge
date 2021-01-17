//https://www.urionlinejudge.com.br/judge/en/problems/view/1079

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int x, n=0;
    double t1;
    double t2;
    double t3;
    cin >> x;
    while (n<x)
    {
        cin>>t1;
        cin>>t2;
        cin>>t3;
        double wa = ((t1*2) + (t2*3) + (t3*5))/10;

        cout<<fixed<<setprecision(1)<<wa<<endl;
        n++;
    }
        return 0;
}