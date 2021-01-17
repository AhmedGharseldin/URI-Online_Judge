//https://www.urionlinejudge.com.br/judge/en/problems/view/1020

#include <iostream>
 
using namespace std;
 
int main(){
    int Age, y, m, d;
    cin>>Age;
    y = Age / 365;
    m = (Age - (y * 365))/30;
    d = Age-((y*365)+(m*30));
    cout<<y<<" ano(s)"<<endl;
    cout<<m<<" mes(es)"<<endl;
    cout<<d<<" dia(s)"<<endl;
    return 0;
}
