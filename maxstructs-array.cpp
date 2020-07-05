#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vect vector<Height>
#define pb push_back
#define mp make_pair
#define savitr ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

struct Height {
	int feet, inches;
};

int calMax(Height arr[], int n)

int main() {
	savitr
	int tc;
	cin>>tc;
	while( tc --) {
		int n, f, inc;
		cin>>n;
		vect arr;
		for (int i = 0; i < n; i ++) {
			cin>>f>>inc;
			arr.pb({f, inc});
		}
		calMax(arr, n);
	}
	return 0;
}