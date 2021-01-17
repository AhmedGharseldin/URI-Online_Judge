//https://www.urionlinejudge.com.br/judge/en/problems/view/1095

#include <iostream>
 
using namespace std;
 
int main()
{
    int I = 1, J = 60;

    for (int i =0; i<=12; i++)
    {
        cout<<"I="<<I<<" "<<"J="<<J<<endl;
        I+=3;
        J-=5;
    }
    return 0;
}
