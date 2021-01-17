//https://www.urionlinejudge.com.br/judge/en/problems/view/1099

#include <iostream>
 
using namespace std;
 
int main()
{
    int n, x, y,tmp;

    cin>>n;
    for (int i = 0; i < n; i++)
    {

        cin>>x>>y;
        int sum = 0;
        if(y>x)
        {
            tmp = y;
            y = x;
            x = tmp;
        }
        for (int j = y+1; j < x; j++)
        {
            if (j%2 == 1 || j%2 == -1)
                sum= sum + j;
        }
        cout<<sum<<endl;

    }
    return 0;
}
