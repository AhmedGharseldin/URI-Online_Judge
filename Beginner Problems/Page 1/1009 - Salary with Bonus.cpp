//https://www.urionlinejudge.com.br/judge/en/problems/view/1009

#include <iostream>
#include <iomanip>

using namespace std;
 
int main(){
    string A;
    double B,C;
    cin>>A>>B>>C;
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<B+(C*0.15)<<endl;
    return 0;
}
