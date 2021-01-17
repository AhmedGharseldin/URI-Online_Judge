//https://www.urionlinejudge.com.br/judge/en/problems/view/1150

#include <iostream>
 
using namespace std;
 
int main()
{
    int x, z;
    cin>>x;
    int sum = 0, i =1;
    do
    {
        cin>>z;
    }
    while(z<=x);

    for (i ; i <= z; i++)
    {
        sum += x;
        x++;
        if (sum>z)
            break;
    }
    cout<<i<<endl;
    return 0;
}
