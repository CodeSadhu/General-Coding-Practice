#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    int count = 0, max = 0, arr[3];
    cin>>tc;
    if (tc <= 1000 && tc >= 1) {
        for (int i = 0; i < tc; ++ i) {
            for (int j = 0; j < 3; ++ j) {
                cin>>arr[j];
            }
            for (int j = 0; j < 3; ++ j) {
                if (arr[j] == 1) {
                    count += 1;
                    if (count >= 2)
                        max += 1;
                }
            }
        }
    }
    cout<<max;
    return 0;
}
