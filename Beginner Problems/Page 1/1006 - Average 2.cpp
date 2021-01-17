//https://www.urionlinejudge.com.br/judge/en/problems/view/1006

#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main(){
    double A,B,C;
    cin>>A>>B>>C;
    cout<<fixed<<setprecision(1)<<"MEDIA = "<<((A*2)+(B*3)+(C*5))/10<<endl;
    return 0;
}
