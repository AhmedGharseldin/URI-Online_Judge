//https://www.urionlinejudge.com.br/judge/en/problems/view/1036

#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;
 
int main (){
    double a, b, c, x;
    cin>>a>>b>>c;
    x = (b*b)-(4*a*c);
    double R1 = (-b + sqrt(x))/(2*a);
    double R2 = (-b - sqrt(x))/(2*a);
    if (a!=0 && x>=0){
        cout<<"R1 = "<<fixed<<setprecision(5)<<R1<<endl;
        cout<<"R2 = "<<fixed<<setprecision(5)<<R2<<endl;
    }
    else
        cout<<"Impossivel calcular"<<endl;
    return 0;
}
