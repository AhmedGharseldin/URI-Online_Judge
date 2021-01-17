//https://www.urionlinejudge.com.br/judge/en/problems/view/1071

#include <iostream>
 
using namespace std;
 
int main()
{
    int x,y,tmp=0;
    int sum = 0;
    cin>>x>>y;
    if (x<y)
    {
        tmp = y;
        y = x;
        x = tmp;
    }
    for (int i = y + 1; i < x; i++)
    {
        if (i%2 == 1 || i%2 == -1)
            sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}