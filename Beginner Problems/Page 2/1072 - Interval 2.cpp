//https://www.urionlinejudge.com.br/judge/en/problems/view/1072

#include <iostream>
 
using namespace std;
 
int main()
{
    int N, temp, in=0, out=0, n=0;
    cin>>N;

    while (n<N)
    {
        cin>>temp;
        if (temp>=10 && temp<=20)
        {
            in++;
        }
        else
            out++;
        n++;
    }
    cout<<in++<<" in\n";
    cout<<out++<<" out\n";
}
