//https://www.urionlinejudge.com.br/judge/en/problems/view/1149

#include <iostream>
 
using namespace std;
 
int main()
{
    int a, n;
    cin>>a;
    int sum = 0;
    do
    {
        cin>>n;
    }
    while(n<=0);

    for (int i = 0; i < n; i++)
    {
        sum += a;
        a++;
    }
    cout<<sum<<endl;
    return 0;
}
