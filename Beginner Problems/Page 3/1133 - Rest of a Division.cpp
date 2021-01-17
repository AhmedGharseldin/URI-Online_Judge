//https://www.urionlinejudge.com.br/judge/en/problems/view/1133

#include <iostream>
 
using namespace std;
 
int main()
{
    int x,y, tmp =0;
    cin>>x>>y;
    if (y>x)
    {
        tmp = y;
        y = x;
        x = tmp;
    }
    for (int i = y+1; i < x; i++)
    {
        if (i%5 == 2 || i%5 == 3)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
