#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> vec;
    int element, key, mid, high, low = 0;
    cout<<"\nEnter elements: ";
    for (int i = 0; i < 5; i ++) {
        cin>>element;
        vec.push_back(element);
    }
    sort(vec.begin(), vec.end());
    cout<<"\nEnter key: ";
    cin>>key;
    high = vec.size() - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (vec[mid] == key){
            cout<<"\nFound!";
            break;
        }
        else if (vec[mid] > key)
            high = mid - 1;
        else low = mid + 1;
    }
    return 0;
}
