//https://www.urionlinejudge.com.br/judge/en/problems/view/1064

#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main()
{
    double a, pos=0;
    int n=0, counter=0;

    while (n<6)
    {
        cin>>a;
        n++;
        if (a>0)
           {
            counter++;
            pos+=a;
           }
    }
    cout<<counter<<" valores positivos\n";
    cout<<fixed<<setprecision(1)<<pos/counter<<endl;
    return 0;
}
