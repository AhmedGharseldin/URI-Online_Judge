//https://www.urionlinejudge.com.br/judge/en/problems/view/1049

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string x, y, z;
    cin>> x >> y >> z;
    if(x == "vertebrado")
    {
        if (y == "ave")
        {
            if (z == "carnivoro")
                cout<<"aguia"<<endl;
            else if (z == "onivoro")
                cout<<"pomba"<<endl;
        }
        else if (y == "mamifero")
        {
            if (z == "onivoro")
                cout<<"homem"<<endl;
            else if (z == "herbivoro")
                cout<<"vaca"<<endl;
        }
    }
    else if (x == "invertebrado")
    {
        if (y == "inseto")
        {
            if (z == "hematofago")
                cout<<"pulga"<<endl;
            else if (z == "herbivoro")
                cout<<"lagarta"<<endl;
        }
        else if (y == "anelideo")
        {
            if (z == "hematofago")
                cout<<"sanguessuga"<<endl;
            else if (z == "onivoro")
                cout<<"minhoca"<<endl;
        }
    }
    return 0;
}
