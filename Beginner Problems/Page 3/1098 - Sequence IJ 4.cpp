//https://www.urionlinejudge.com.br/judge/en/problems/view/1098

#include <iostream>
 
using namespace std;
 
int main()
{
    double I = 0, J = 1;

    for(int j = 0; j < 11; j++){

        for (int i =0; i<3; i++)
        {
            cout<<"I="<<I<<" "<<"J="<<J<<endl;
            J+=1;
        }
        I+=0.2;
        J-=2.8;
    }
    return 0;
}
