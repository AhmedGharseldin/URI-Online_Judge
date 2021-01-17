//https://www.urionlinejudge.com.br/judge/en/problems/view/1142

#include <iostream>
 
using namespace std;
 
int main()
{
    int a, x=0;
    cin>>a;
    for (int j = 0; j < a; j++)
    {
        for (int i=1; i<4; i++)
            cout<<++x + j<<" ";
        cout<<"PUM\n";
    }
    return 0;
}
