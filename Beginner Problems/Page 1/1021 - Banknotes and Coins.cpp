//https://www.urionlinejudge.com.br/judge/en/problems/view/1021

#include <iostream>
 
using namespace std;
 
int main(){
    double x;
    cin>>x;
    
    int t = x;
    int n = (x - t)*100;
    int u = 0;
    
    cout<<"NOTAS:"<<endl;
    cout<<t/100<<" nota(s) de R$ 100.00"<<endl; //100
    u = t%100;     
    cout<<u/50<<" nota(s) de R$ 50.00"<<endl; //50
    u = u%50;
    cout<<u/20<<" nota(s) de R$ 20.00"<<endl; //20
    u = u%20;
    cout<<u/10<<" nota(s) de R$ 10.00"<<endl; //10
    u = u%10;
    cout<<u/5<<" nota(s) de R$ 5.00"<<endl;
    u = u%5;
    cout<<u/2<<" nota(s) de R$ 2.00"<<endl;
    u = u%2;
    cout<<"MOEDAS:"<<endl;
    cout<<u/1<<" moeda(s) de R$ 1.00"<<endl;
    cout<<n/50<<" moeda(s) de R$ 0.50"<<endl;
    n = n%50;
    cout<<n/25<<" moeda(s) de R$ 0.25"<<endl;
    n = n%25;
    cout<<n/10<<" moeda(s) de R$ 0.10"<<endl;
    n = n%10;
    cout<<n/5<<" moeda(s) de R$ 0.05"<<endl;
    n = n%5;
    cout<<n/1<<" moeda(s) de R$ 0.01"<<endl;

    return 0;
}
