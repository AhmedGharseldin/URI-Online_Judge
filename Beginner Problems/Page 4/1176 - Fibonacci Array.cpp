#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    long long arr[61] = {0,1};
    for (int i = 2; i <= 60; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    cin>>T;
    for (int j = 0 ; j < T; j++)
    {
        int N;
        cin>>N;
        cout<<"Fib("<<N<<") = "<<arr[N]<<endl;
    }
    return 0;
}
