#include<bits/stdc++.h>
using namespace std;

int main() {
    int w = 0, div[2];
    cin>>w;
    if (w >= 1 && w <= 100){
        div[0] = w/2;
        div[1] = w / 2;
        if (div[0] % 2 == 0 && div[1] % 2 == 0){
            cout<<"YES";
        }
        else
            cout<<"NO";
    }
    return 0;
}
