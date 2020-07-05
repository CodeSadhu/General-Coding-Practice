#include<iostream>
using namespace std;

int main(){
    int no, k;
    cin>>no>>k;
    for (int i = 0; i < k; i ++){
        if (no % 10 == 0)
            no /= 10;
        else
            no -= 1;
    }
    cout<<no;
    return 0;
}
