#include <iostream>

using namespace std;

int binaryToDecimal(int n)
{
    int num=n;
    int dec_val=0;
    int base=1;
    int temp=num;
    while(temp)
    {
        int last_digit=temp%10;
        temp=temp/10;
        dec_val += last_digit*base;
        base = base * 2;
    }
    return dec_val;
}

int main()
{
    int num1;
    cin>>num1;
    cout<<binaryToDecimal(num1)<<endl;

    return 0;
}
