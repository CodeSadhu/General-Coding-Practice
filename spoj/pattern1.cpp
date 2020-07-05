#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    cin >> n;
    cout<<endl;
    for (i = n; i >= 1; i --){
        for (j = i; j >= 1;j --){
            for (int k = i; k <= j; k ++)
                cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
}
