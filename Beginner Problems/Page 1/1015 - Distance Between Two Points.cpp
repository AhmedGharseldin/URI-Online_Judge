//https://www.urionlinejudge.com.br/judge/en/problems/view/1015

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main(){
    double x1, x2, y1, y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cout<<fixed<<setprecision(4)<<sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)))<<endl;
    return 0;
}
