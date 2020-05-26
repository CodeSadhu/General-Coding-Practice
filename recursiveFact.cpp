#include <bits/stdc++.h>
using namespace std;
int factorial(int n);
int main(){
    int no;
    cout<<"\nEnter num: ";
    cin>>no;
    int res;
    res = factorial(no);
    cout<<"\nFactorial of "<<no<<" is: "<<res<<endl;
    return 0;
}

int factorial(int n)
{
    int fact = 0;
    if (n == 0) return 1;
    else if (n > 1)
    {
        fact = n * factorial(n - 1);
    }
}
