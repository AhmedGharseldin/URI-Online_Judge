//https://www.urionlinejudge.com.br/judge/en/problems/view/1174

#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
    double x[100];
    for (int i = 0; i < 100; i++)
    {
        cin>>x[i];
        if (x[i] <= 10)
        cout <<fixed<<setprecision(1)<<"A["<<i<<"] = "<<x[i]<<endl;
    }
    return 0;
}
