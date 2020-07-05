#include <iostream>
using namespace std;

int main(){
    int x;
    int jd;
    int inpX();
    x = inpX();
    if (x >= 1 && x <= 30){
        jd = x *2;
        cout<<jd;
    }
}

int inpX(){
    int x;
    cin>>x;
    return x;
}
