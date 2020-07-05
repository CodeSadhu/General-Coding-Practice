#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    int n, k;
    cout<<"Testcase: ";
    cin>>testCase;
    for (int i = 0; i < testCase; i ++){
        int count = 0;
        cout<<endl<<"n and k: ";
        cin>>n>>k;
        int arr[n];
        for (int j = 0; j < n; j ++){
            cout<<"array: ";
            cin>>arr[j];
        }
        for (int j = 0; j < n; j ++){
            for (int m = k; m >= 1; m --){
                if (arr[j] == m){
                    for (int x = 1; x <= k; x ++){
                        if (arr[j + x] == (m - x)){
                            count += 1;
                        }
                    }
                }
                else{
                    break;
                }
            }
        }
        cout<<endl<<"Count: "<<count;
    }
    return 0;
}
