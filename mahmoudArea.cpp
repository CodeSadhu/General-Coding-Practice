#include <iostream>
using namespace std;

int main(){
    int n, height, width;
    cin>>n;
    if (n >= 1 && n <= 200){
        for (int i = 1; i <= 200; i ++)
        {
            for (int j = 1; j <= 200; j ++)
            {
                if (i*j == n){
                    if (i != n && j > 5){                        
                        height = i;
                        width = j;
                        break;
                    }
                    else continue;
                }
                else continue;
            }
        }
    }
    cout<<height<<" "<<width;
    return 0;
}
