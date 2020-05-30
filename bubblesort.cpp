#include<bits/stdc++.h>
using namespace std;
int bubbleSort(int arr[]);

int main(){
    int n, element, temp;
    cout<<"\nSize of array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++ i){
        cin>>arr[i];
    }
    for (int i = 0; i < n; ++ i){
        for (int j = i + 1; j < n; ++ j){
            if (arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Sorted List: ";
    for (int i = 0; i < n;i ++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
