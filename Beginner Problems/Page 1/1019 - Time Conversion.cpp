//https://www.urionlinejudge.com.br/judge/en/problems/view/1019

#include <iostream>
 
using namespace std;
 
int main(){
    int N, Hour, Minutes;
    cin>>N;
    Hour = N/3600;
    Minutes = (N-(Hour*3600))/60;
    cout<<Hour<<":"<<Minutes<<":"<<N%60<<endl;
    return 0;
}
