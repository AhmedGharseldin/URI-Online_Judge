//https://www.urionlinejudge.com.br/judge/en/problems/view/1156

#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
    double s = 0, x = 2;
    for (int i = 3; i <= 39; i+=2)
    {
        s += i/x;
        x = (2 * x);
    }
    cout<<fixed<<setprecision(2)<<s+1<<endl;
    return 0;
}
