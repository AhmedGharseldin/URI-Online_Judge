//https://www.urionlinejudge.com.br/judge/en/problems/view/1134

#include <iostream>
 
using namespace std;
 
int main()
{
    int a, A = 0, G = 0, D = 0;
    while (1)
    {
        cin>>a;
        if (a==1)
            A++;
        else if (a==2)
            G++;
        else if (a==3)
            D++;
        else if (a==4)
            break;
    }
    cout<<"MUITO OBRIGADO\n";
    cout<<"Alcool: "<<A<<endl;
    cout<<"Gasolina: "<<G<<endl;
    cout<<"Diesel: "<<D<<endl;
    return 0;
}
