//https://www.urionlinejudge.com.br/judge/en/problems/view/1131

#include <iostream>
 
using namespace std;
 
int main()
{
    int inter, gremino, oneOrTwo,
    vInter = 0, vGremino = 0 ,draw = 0, grenais=0;
    do
    {
        cin>>inter>>gremino;
        grenais++;
        if (inter>gremino)
            vInter++;
        else if (gremino>inter)
            vGremino++;
        else
            draw++;
        cout<<"Novo grenal (1-sim 2-nao)\n";
        cin>>oneOrTwo;
    }
    while (oneOrTwo == 1);
    cout<<grenais<<" grenais\n";
    cout<<"Inter:"<<vInter<<endl;
    cout<<"Gremio:"<<vGremino<<endl;
    cout<<"Empates:"<<draw<<endl;
    if (vInter>vGremino)
        cout<<"Inter venceu mais\n";
    else if (vGremino>vInter)
        cout<<"Gremio venceu mais\n";
    else
        cout<<"Não houve vencedor\n";
    return 0;
}
