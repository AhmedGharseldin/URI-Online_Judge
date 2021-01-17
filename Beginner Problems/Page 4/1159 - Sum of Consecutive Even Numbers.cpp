//https://www.urionlinejudge.com.br/judge/en/problems/view/1159

#include <iostream>
 
using namespace std;
 
int main ()
{
    int x, sum = 0;
    while (1)
    {
        cin>>x;
        if (x==0)
            break;
        for (int i = 0; i < 5; i++)
        {
            if (x%2 == 1 || x%2 == -1)
            {
                x++;
            }
            sum+=x;
            x+=2;
        }
        cout<<sum<<endl;
        sum = 0;
    }
    return 0;
}
