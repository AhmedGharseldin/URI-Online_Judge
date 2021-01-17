//https://www.urionlinejudge.com.br/judge/en/problems/view/1113

#include <iostream>
 
using namespace std;
 
int main()
{
    int m,n;
    while (true)
    {
        cin>>m>>n;

        if(m>n)
            cout<<"Decrescente\n";
        else if (m<n)
            cout<<"Crescente\n";
        else
            break;
    }
    return 0;
}
