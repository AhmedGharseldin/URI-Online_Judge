//https://www.urionlinejudge.com.br/judge/en/problems/view/1146

#include <iostream>
 
using namespace std;
 
int main()
{
    int x;
    while (1)
    {
        cin>>x;
        if (x==0)
            break;
        else
            for(int i = 1; i <= x-1; i++)
            {
                cout<<i<<" ";
            }
                cout<<x<<endl;
    }
    return 0;
}
