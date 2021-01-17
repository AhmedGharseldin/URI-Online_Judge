//https://www.urionlinejudge.com.br/judge/en/problems/view/1061

#include <iostream>
 
using namespace std;
 
int main()
{
    string day;
    int sd,sh,sm,ss,ed,eh,em,es;
    char c;
    cin>>day;
    cin>>sd;
    cin>>sh>>c>>sm>>c>>ss;
    cin>>day;
    cin>>ed;
    cin>>eh>>c>>em>>c>>es;
    int du = ((ed*86400) + (eh*3600) + (em*60) + (es)) - ((sd*86400) + (sh*3600) + (sm*60) + (ss));
    cout<<du/86400<<" dia(s)\n";
    du = du%86400;
    cout<<du/3600<<" hora(s)\n";
    du%=3600;
    cout<<du/60<<" minuto(s)\n";
    du%=60;
    cout<<du<<" segundo(s)\n";
    return 0;
}
