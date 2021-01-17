https://www.urionlinejudge.com.br/judge/en/problems/view/1038

#include <iostream>
#include<iomanip>
 
using namespace std;

int main()
{
    int code, price;
    cin>>code>>price;

    switch(code)
    {
    case 1 :
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<price*4.00<<endl;
        break;
    case 2 :
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<price*4.50<<endl;
        break;
    case 3 :
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<price*5.00<<endl;
        break;
    case 4 :
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<price*2.00<<endl;
        break;
    case 5 :
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<price*1.50<<endl;
        break;
    }
    return 0;
}

