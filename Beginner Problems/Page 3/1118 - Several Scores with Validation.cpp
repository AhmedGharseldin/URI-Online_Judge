//https://www.urionlinejudge.com.br/judge/en/problems/view/1118

#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main ()
{
    double x, temp = 0;
    int n = 0, c = 0;
    do
    {
        for (int n = 0; n < 2; n++)
        {
            cin>>x;

            if (x>0 && x<=10)
            {
                temp += x;
            }
            else
            {
                cout<<"nota invalida"<<endl;
                n--;
            }
        }
        cout << "media = "<<fixed<<setprecision(2)<<temp/2<<endl;
        temp = 0;
        do
        {
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>c;
        }
        while ( c > 2 || c < 1);
    }
    while (c == 1);
    return 0;
}
