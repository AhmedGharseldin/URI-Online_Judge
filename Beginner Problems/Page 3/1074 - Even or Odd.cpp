//https://www.urionlinejudge.com.br/judge/en/problems/view/1074

#include <iostream>
 
using namespace std;
 
int main()
{
    int x,y, n=0;
    cin >> x;

    while (n<x)
    {
        cin>>y;
        if (y<0)
            if(y%2 == 0)
            {
                cout<<"EVEN NEGATIVE"<<endl;
                n++;
            }
            else
            {
                cout<<"ODD NEGATIVE"<<endl;
                n++;
            }
        else if (y>0)
            if (y%2 == 1)
            {
                cout<<"ODD POSITIVE"<<endl;
                n++;
            }
            else
            {
                cout<<"EVEN POSITIVE"<<endl;
                n++;
            }
        else
        {
            cout<<"NULL"<<endl;
            n++;
        }
    }
        return 0;
}
