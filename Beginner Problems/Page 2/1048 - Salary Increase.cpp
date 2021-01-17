//https://www.urionlinejudge.com.br/judge/en/problems/view/1048

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float salary, rate, new_salary;
    cin>>salary;

    if(salary<=400)
    {
        rate = 15;
    }
    else if(salary>400 && salary<=800)
    {
        rate = 12;
    }
    else if(salary>800 && salary<=1200)
    {
        rate = 10;
    }
    else if(salary>1200 && salary<=2000)
    {
        rate = 7;
    }
    else
    {
        rate = 4;
    }
    new_salary = salary + (salary * rate/100);

    cout<<"Novo salario: "<<fixed<<setprecision(2)<<new_salary<<endl;
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<new_salary-salary<<endl;
    cout<<"Em percentual: "<<fixed<<setprecision(0)<<rate<<" %"<<endl;
    return 0;
}