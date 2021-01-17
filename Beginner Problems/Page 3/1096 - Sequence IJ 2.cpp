//https://www.urionlinejudge.com.br/judge/en/problems/view/1096

#include <iostream>
 
using namespace std;
 
int main()
{
    int I = 1, J = 7;

    for(int j = 0; j < 5; j++){

        for (int i =0; i<3; i++)
        {
            cout<<"I="<<I<<" "<<"J="<<J<<endl;
            J-=1;
        }
        I+=2;
        J+=3;
    }
    return 0;
}
