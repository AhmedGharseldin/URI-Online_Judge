//https://www.urionlinejudge.com.br/judge/en/problems/view/1067

#include <iostream>
 
using namespace std;
 
int main ()
{
    int x;
    int n=1;
    cin>>x;
    do
    {
        cout<<n<<endl;
        n+=2;
    }
    while(n<=x);

    return 0;
}
