//https://www.urionlinejudge.com.br/judge/en/problems/view/1143

#include <iostream>
 
using namespace std;
 
int main()
{
    int a;
    cin>>a;

    for (int i = 1; i <= a; i++)
    {
        cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
    }
    return 0;
}
