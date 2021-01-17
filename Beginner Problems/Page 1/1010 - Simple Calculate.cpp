//https://www.urionlinejudge.com.br/judge/en/problems/view/1010

#include <iostream>
#include <iomanip>

using namespace std;
 
int main(){
    int A,B,C,D;
    double E,F;
    cin>>A>>B>>E;
    cin>>C>>D>>F;
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<(B*E)+(D*F)<<endl;
    return 0;
}
