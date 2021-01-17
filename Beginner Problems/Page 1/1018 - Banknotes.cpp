//https://www.urionlinejudge.com.br/judge/en/problems/view/1018

#include <iostream>
 
using namespace std;
 
int main(){
    int x;
    cin>>x;
    int y1=x%100;
    int y2=y1%50;
    int y3=y2%20;
    int y4=y3%10;
    int y5=y4%5;
    int y6=y5%2;
    int y7=y6%1;

    cout<<x<<endl;
    cout<<(x-y1)/100<<" nota(s) de R$ 100,00"<<endl;
    cout<<(y1-y2)/50<<" nota(s) de R$ 50,00"<<endl;
    cout<<(y2-y3)/20<<" nota(s) de R$ 20,00"<<endl;
    cout<<(y3-y4)/10<<" nota(s) de R$ 10,00"<<endl;
    cout<<(y4-y5)/5<<" nota(s) de R$ 5,00"<<endl;
    cout<<(y5-y6)/2<<" nota(s) de R$ 2,00"<<endl;
    cout<<(y6-y7)/1<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}
