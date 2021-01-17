//https://www.urionlinejudge.com.br/judge/en/problems/view/1101

#include <iostream>
 
using namespace std;
 
int main()
{
    int m,n, tmp=0;
    while (true)
    {
        cin>>m>>n;
        int x = 0;
        if (m<=0 || n<=0)
            break;
        else if(n>m)
        {
            tmp = m;
            m = n;
            n = tmp;
        }
        for (int i = n; i<=m; i++)
        {
            cout<<n<<" ";
            x+=n;
            n+=1;
        }
        cout<<"Sum="<<x<<endl;
    }
    return 0;
}
