//https://www.urionlinejudge.com.br/judge/en/problems/view/1045

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c,t;
    cin>>a>>b>>c;
    if (a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    if (b<c)
    {
        t=b;
        b=c;
        c=t;
    }
    if (a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(a>=b+c)
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else if ((a*a)==(b*b)+(c*c))
    {
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    else if ((a*a)>(b*b)+(c*c))
    {
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    else if ((a*a)<(b*b)+(c*c))
    {
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if (a==b && b==c)
    {
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    else if (a==b || b==c || a==c)
    {
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    return 0;
}
