//https://www.urionlinejudge.com.br/judge/en/problems/view/1153

#include <iostream>
 
using namespace std;
 
int main()
{
    int n, x = 0, temp = 0;
    cin>>n;
    x = n-1;
    temp = n * x;

    for (int i = 0; i < n-2; i++)
    {
        x--;
        temp *= x;
    }
    cout<<temp<<endl;
    return 0;
}
