//https://www.urionlinejudge.com.br/judge/en/problems/view/1075

#include <iostream>
 
using namespace std;
 
int main()
{
    int x, n=0;

    cin >> x;

    while (n<10000)
    {
        if (n%x == 2)
        {
            cout<<n<<endl;
        }
        n++;

    }
        return 0;
}
