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
    // cout<<"Sorted Vector: ";
    // for (int i = 0; i < int(vec.size()); ++ i)
    //     cout<<vec.at(i)<<" ";
    cout<<"\nEnter key: ";
    cin>>key;
    high = int(vec.size());
    while (low < high){
        mid = (low + high) / 2;
        if (vec[mid] == key){
            cout<<"\nFound!";
            break;
        }
        if (vec[mid] < key)
            high = mid - 1;
        else low = mid + 1;
    }
    return 0;
}
