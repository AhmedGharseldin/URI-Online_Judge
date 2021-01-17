//https://www.urionlinejudge.com.br/judge/en/problems/view/1070

#include <iostream>
 
using namespace std;
 
int main()
{
    int a, n=0;
    cin>>a;

    while (n<6)
    {
        if (a%2 == 0)
        {
            a+=1;
        }
        else
        {
            cout<<a<<endl;
            a+=2;
            n++;
        }
    }
    return 0;
}