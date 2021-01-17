//https://www.urionlinejudge.com.br/judge/en/problems/view/1065

#include <iostream>
 
using namespace std;
 
int main()
{
    int a;
    int n=0, counter=0;

    while (n<5)
    {
        cin>>a;
        n+=1;
        if (a%2 == 0)
            counter+=1;
    }
    cout<<counter<<" valores pares\n";

    return 0;
}
