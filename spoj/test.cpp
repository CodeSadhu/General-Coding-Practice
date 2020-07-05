#include <iostream>
using namespace std;

int main(){
    int n, arr[10], i = 0;
    x: cin>>n;
    while (n != 42){
        arr[i] = n;
        i ++;
        goto x;
    }
    for (int j = 0; j < 10; j ++){
        cout<<arr[j];
    }
    return 0;
}
