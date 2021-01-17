//https://www.urionlinejudge.com.br/judge/en/problems/view/1040

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float N1,N2,N3,N4,N5,median;
    cin>>N1>>N2>>N3>>N4;
    median = (N1*2 + N2*3 + N3*4 + N4)/10.00;

    cout<<"Media: "<<fixed<<setprecision(1)<<median<<endl;
    if (median>=7){
        cout<<"Aluno aprovado."<<endl;
    }
    else if(median<5){
        cout<<"Aluno reprovado."<<endl;
    }
    else if (median>=5 && median<6.9){
        cout<<"Aluno em exame."<<endl;
        cin>>N5;
        cout<<"Nota do exame: "<<N5<<endl;
        cout<<"Aluno aprovado."<<endl;
        cout<<"Media final: "<<(median+N5)/2<<endl;
    }
    return 0;
}
