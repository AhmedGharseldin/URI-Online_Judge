//https://www.urionlinejudge.com.br/judge/en/problems/view/1164

#include <iostream>
 
using namespace std;
 
int main ()
{
    int n, x, sum = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        for (int j = 1; j < x; j++)
        {
            if (x%j == 0)
            {
                sum+=j;
            }
        }
        if (sum == x)
        {
            cout<<x<<" eh perfeito\n";
        }
        else
        {
            cout<<x<<" nao eh perfeito\n";
        }
        sum = 0;
    }
    return 0;
}
