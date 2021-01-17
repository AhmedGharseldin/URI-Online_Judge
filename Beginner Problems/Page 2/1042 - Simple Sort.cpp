//https://www.urionlinejudge.com.br/judge/en/problems/view/1042

#include <iostream>
#include <cmath> 
using namespace std;
 
int main()
{
    float a, b, c,abso1,abso2,abso3,bigger_ab,smaller_ab,bigger2,smaller2, min,mid,max;
    cin>>a>>b>>c;
    abso1 = abs(a-b);
    bigger_ab = ((a+b+abso1)/2) ;
    smaller_ab = a+b-bigger_ab;
    abso2 = abs(c-smaller_ab);
    bigger2 = ((c+smaller_ab+abso2)/2) ;
    smaller2 = c+smaller_ab-bigger2;
    min = smaller2;
    abso3 = abs(bigger_ab-bigger2);
    max = ((bigger_ab+bigger2+abso3)/2) ;
    mid = a+b+c-min-max;

    cout << min <<endl;
    cout << mid <<endl;
    cout << max <<endl;
    cout <<endl;
    cout << a <<endl;
    cout << b <<endl;
    cout << c <<endl;
}
