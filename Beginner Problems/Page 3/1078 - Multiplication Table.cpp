//https://www.urionlinejudge.com.br/judge/en/problems/view/1078

#include <iostream>
 
using namespace std;
 
int main()
{
    int x, n=1;

    cin >> x;

    while (n<11)
    {
        cout<<n<<" x "<<x<<" = "<<n*x<<endl;
        n++;
    }
        return 0;
}
