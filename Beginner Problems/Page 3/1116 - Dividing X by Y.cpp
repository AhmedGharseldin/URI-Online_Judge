//https://www.urionlinejudge.com.br/judge/en/problems/view/1116

#include <iostream>
#include<iomanip>

 using namespace std;
 
int main()
{

    int n;
    double x,y;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        if (y==0)
            cout<<"divisao impossivel\n";
        else
        {
            double sum;
            sum = x / y;
            cout<<fixed<<setprecision(1)<<sum<<endl;
        }
    }
    return 0;
}
