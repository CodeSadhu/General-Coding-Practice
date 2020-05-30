#include<iostream>
#include<string>
using namespace std;

class shape {
    public:
        int faces;
        string name;
        shape *next;
};

void retCals() {
    int n, temp = 0;
    shape arr[1000];
    cin>>n;
    for (int i = 0; i < n; i ++){
        arr[i] = new shape();
        cin>>arr[i] -> name;
        switch (arr[i] -> name) {
            case "Tetrahedron":
                arr[i] -> val = 4;
                break;
            case "Cube":
                arr[i] -> val = 6;
                break;
            case "Octahedron":
                arr[i] -> val = 8;
                break;
            case "Dodecahedron":
                arr[i] -> val = 10;
                break;
            case "Icosahedron":
                arr[i] -> val = 20;
                break;
        }
        temp += arr[i] -> val;
    }
    cout<<temp;
}

int main(){
    retCals();
    // cin>>n;
    // for (int i = 0; i < n; i ++){
    //     cin>>sh -> name;
    //     temp += sh -> val;
    // }
}
