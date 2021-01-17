//https://www.urionlinejudge.com.br/judge/en/problems/view/1080

#include <iostream>
 
using namespace std;
 
int main()
{
    int x,mx=0,cnt=0;
    for (int i = 1; i < 101; i++)
    {
        cin>>x;
        if (x>mx)
        {
            mx=x;
            cnt=i;
        }
    }
    cout<<mx<<endl;
    cout<<cnt<<endl;
    return 0;
}
