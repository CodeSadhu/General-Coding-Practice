#include<iostream>
using namespace std;

int main(){
    int a, b, i = 0, temp = 0;
    cin>>a>>b;

    while (a <= b){
        a = a * 3;
        // cout<<"\na: "<<a;
        b = b * 2;
        // cout<<"\nb: "<<b;
        i = i + 1;
        // cout<<"\ni: "<<i;
    }
    temp = i;
    cout<<temp;
    return 0;
}
