#include<iostream>
using namespace std;

int fact(int n)
{
    int res=1;
    for(int i=2;i<=n;i++)
    {
        res=res*i;
    }
    return res;
}
double count_heads(int N, int R)
{
    double output;
    output=fact(N)/(fact(R)*fact(N-R));
    output=output/(pow(2,N));
    return output;
}
int main()
{
    int N,R;
    cin>>N;
    cin>>R;
    cin.precision(6);
    cout<<fixed<<count_heads(N,R);
    return 0;
}
