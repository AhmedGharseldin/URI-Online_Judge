//https://www.urionlinejudge.com.br/judge/en/problems/view/1145

#include <iostream>
 
using namespace std;
 
int main()
{
    int x,y, cntr=1;
    cin>>x>>y;
    for (int j=0; j<y; j+=x)
    {
        for (int i=0; i<x; i++)
        {
            if (cntr == y+1)
                break;
            cout<<cntr++;
            if (i<x-1)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
