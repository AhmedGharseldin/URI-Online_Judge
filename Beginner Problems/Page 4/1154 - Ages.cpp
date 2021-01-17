//https://www.urionlinejudge.com.br/judge/en/problems/view/1154

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n, counter = 0;
    double x = 0;
    cin>>n;
    while (n>=0)
    {
        x+=n;
        counter++;
        cin>>n;
    }
    cout<<fixed<<setprecision(2)<<x/counter<<endl;
    return 0;
}
