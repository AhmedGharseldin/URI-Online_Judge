//https://www.urionlinejudge.com.br/judge/en/problems/view/1066

#include <iostream>
 
using namespace std;
 
int main()
{
    int a;
    int n=0, odd=0, even=0, positive=0, negative=0 ;

    while (n<5)
    {
        cin>>a;
        n+=1;
        if (a>0)
            positive+=1;
        if (a%2 != 0)
            odd+=1;
        if (a%2 == 0)
            even+=1;
        if (a<0)
            negative+=1;
    }
    cout<<even<<" valor(es) par(es)\n";
    cout<<odd<<" valor(es) impar(es)\n";
    cout<<positive<<" valor(es) positivo(s)\n";
    cout<<negative<<" valor(es) negativo(s)\n";

    return 0;
}
