//https://www.urionlinejudge.com.br/judge/en/problems/view/1060

#include <iostream>
using namespace std;

int main ()
{
    double a;
    int n=0, counter=0;

    do
    {
        cin>>a;
        n+=1;
        if (a>0)
        {
            counter+=1;
        }
    }while(n<6);

    cout<<counter<<" valores positivos"<<endl;
    return 0;
}
