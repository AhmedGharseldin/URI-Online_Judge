//https://www.urionlinejudge.com.br/judge/en/problems/view/1132

#include <iostream>
 
using namespace std;
 
int main()
{
    int x,y, tmp =0;
    int sum = 0;
    cin>>x>>y;
    if (y>x)
    {
        tmp = y;
        y = x;
        x = tmp;
    }
    for (int i = y; i <= x; i++)
    {
        if (i%13 != 0)
        {
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
