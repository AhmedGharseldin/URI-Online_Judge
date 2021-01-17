//https://www.urionlinejudge.com.br/judge/en/problems/view/1046

#include <iostream>

using namespace std;

int main ()
{
    int st,et;
    cin>>st>>et;
    if(st==et){
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }
    else if (st>et)
        cout<<"O JOGO DUROU "<<abs(st-et-24)<<" HORA(S)"<<endl;
    else
        cout<<"O JOGO DUROU "<<abs(st-et)<<" HORA(S)"<<endl;

    return 0;
}
