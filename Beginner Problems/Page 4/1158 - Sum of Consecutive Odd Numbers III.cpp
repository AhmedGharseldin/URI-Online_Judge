//https://www.urionlinejudge.com.br/judge/en/problems/view/1158

#include <iostream>
 
using namespace std;
 
int main ()
{
    int n = 0, testCases, x, y, i, j, sum, temp, temp2;
    cin>>testCases;
    do
    {
        cin>>x>>y;
        if (x%2 == 0)
        {
            sum = 0;
            temp = 1;
            i = 0;
            while ( i < y)
            {
                sum += (x + temp);
                temp+=2;
                i++;
            }
            cout<<sum<<endl;
        }
        else
        {
            sum = 0;
            temp2 = 0;
            j = 0;
            while (j < y)
            {
                sum += (x + temp2);
                temp2+=2;
                j++;
            }
            cout<<sum<<endl;
        }
        n++;
    }
    while (n < testCases);
    return 0;
}

