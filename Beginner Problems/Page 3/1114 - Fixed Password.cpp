//https://www.urionlinejudge.com.br/judge/en/problems/view/1114

#include <iostream>
 
using namespace std;
 
int main()
{
    int pass;
    while (true)
    {
        cin>>pass;

        if(pass!=2002)
            cout<<"Senha Invalida\n";
        else
        {
            cout<<"Acesso Permitido\n";
            break;
        }
    }
    return 0;
}
