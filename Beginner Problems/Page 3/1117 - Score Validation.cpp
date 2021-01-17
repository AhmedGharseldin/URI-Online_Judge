//https://www.urionlinejudge.com.br/judge/en/problems/view/1117

#include <iostream>
#include<iomanip>

using namespace std;
 
int main()
{
    double s1, s2;
    cin>>s1;
    while (s1<0||s1>10.0)
    {
        cout<<"nota invalida"<<endl;
        cin>>s1;
    }
    cin>>s2;
    while (s2<0||s2>10.0)
    {
        cout<<"nota invalida"<<endl;
        cin>>s2;
    }
    double m = (s1+s2)/2;
    cout<<fixed<<setprecision(2)<<"media = "<<m<<endl;
    return 0;
}
