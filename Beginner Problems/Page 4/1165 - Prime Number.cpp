//https://www.urionlinejudge.com.br/judge/en/problems/view/1165

#include <iostream>
 
using namespace std;
 
int main ()
{
    int n,x, sum;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        sum = 0;
        for (int j = 1; j <= x; j++)
        {
            if (x % j == 0)
            {
                sum++;
            }
        }
        if (sum == 2)
            cout<<x<<" eh primo\n";
        else
            cout<<x<<" nao eh primo\n";
    }
    return 0;
}
