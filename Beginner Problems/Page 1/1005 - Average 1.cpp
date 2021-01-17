//https://www.urionlinejudge.com.br/judge/en/problems/view/1005

#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main(){
    double A,B;
    cin>>A>>B;
    cout<<fixed<<setprecision(5)<<"MEDIA = "<<((A*3.5)+(B*7.5))/11<<endl;
    return 0;
}