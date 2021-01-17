//https://www.urionlinejudge.com.br/judge/en/problems/view/1047

#include <iostream>
 
using namespace std;
 
int main ()
{
    int sh,sm,eh,em;
    cin>>sh>>sm>>eh>>em;
    int total_minutes = ((eh*60)+em)-((sh*60)+sm);

    if (total_minutes<=0)
    {
        total_minutes+=24*60;
    }
    cout<<"O JOGO DUROU "<<(total_minutes/60)<<" HORA(S) E "<< (total_minutes%60)<<" MINUTO(S)"<<endl;
    return 0;
}