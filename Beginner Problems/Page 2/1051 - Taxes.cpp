//https://www.urionlinejudge.com.br/judge/en/problems/view/1051

#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main()
{
    double s;
    double tax = 0;

    cin>>s;

    if (s>=0 && s<= 2000)
    {
        cout<<"Isento\n";
    }
    else if (s<=3000 && s>2000)
    {
        tax = (s - 2000) * 0.08;
        cout<<"R$ "<<fixed<<setprecision(2)<<tax<<endl;
    }
    else if (s<=4500 && s>3000)
    {
        tax = (s-3000) * 0.18 + 80;
        cout<<"R$ "<<fixed<<setprecision(2)<<tax<<endl;
    }
    else if (s>4500)
    {
        tax = (s-4500) * 0.28 + 350;
        cout<<"R$ "<<fixed<<setprecision(2)<<tax<<endl;
    }
    return 0;
}