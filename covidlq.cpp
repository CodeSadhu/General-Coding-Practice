#include <iostream>
using namespace std;

int main(){
    int a[100], n;
    int f = -1, s = -1, flag = 0;
    cin>>n;
    for (int i = 0; i < n; i ++)
        cin>>a[i];
    for (int i = 0; i < n; i ++){
        if (a[i] == 1){
            if (f == -1)
                f = i;
            else
                s = i;
            if (f != -1 && s != -1){
                flag = 1;
                f = -1;
                s = -1;
            }
            else flag = 0;
        }
    }
    if (flag = 1){
        if (s - f == 6){
            cout<<"YES";
        }
        else cout<<"NO";
    }
    return 0;
}
