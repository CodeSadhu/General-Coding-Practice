#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, temp = 0;
    string shape = "";
    cin>>n;
    for (int i = 0; i < n; i ++){
        cin>>shape;
        if (shape == "Tetrahedron")
            temp += 4;
        else if (shape == "Cube")
            temp += 6;
        else if (shape == "Octahedron")
            temp += 8;
        else if (shape == "Dodecahedron")
            temp += 12;
        else if (shape == "Icosahedron")
            temp += 20;
    }
    cout<<temp;
    return 0;
}
