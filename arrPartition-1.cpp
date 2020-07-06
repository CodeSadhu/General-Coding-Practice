// Simple O(n) code for moving all 0's to beginning of an array

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vect vector<int>
#define pb push_back
#define mp make_pair
#define savitr ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	savitr
	int n, temp;
	cin>>n;
	vect arr, partArr;
	for (int i = 0; i < n; i ++) {
		cin>>temp;
		arr.pb(temp);
	}
	for (int i = 0; i < n; i ++) {
		if (arr[i] == 0)
			partArr.pb(arr[i]);
	}
	for (int i = 0; i < n; i ++) {
		if (arr[i] != 0)
			partArr.pb(arr[i]);
	}
	for (int i = 0; i < n; i ++)
		cout<<partArr[i]<<" ";
	return 0;
}