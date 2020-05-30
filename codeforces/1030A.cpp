#include <iostream>
using namespace std;

int main(){
    int n, a[100];
    bool flag = false;
    cin>>n;
    for (int i = 0; i < n; i ++)
        cin>>a[i];

    for (int i = 0; i < n; i ++){
        if (a[i] == 1)
            flag = true;
    }
    flag ? cout<<"HARD" : cout<<"EASY";
    return 0;
}
