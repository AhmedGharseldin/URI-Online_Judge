//https://www.urionlinejudge.com.br/judge/en/problems/view/1160

#include <iostream>
 
using namespace std;
 
int main ()
{
    int t, pa, pb, counter;
    float ga, gb;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>pa>>pb>>ga>>gb;
        counter = 0;
        do
        {
            pa *= (ga/100)+1;
            pb *= (gb/100)+1;
            counter++;
            if (pa > pb)
                break;
            if (counter>100)
                break;
        }
        while (1);
        if (counter>100)
            cout<<"Mais de 1 seculo.\n";
        else
            cout<<counter<< " anos.\n";
    }
    return 0;
}
